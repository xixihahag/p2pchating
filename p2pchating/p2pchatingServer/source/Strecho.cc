#include "Strecho.h"
#include "Define.h"
#include "Data.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string>
#include <cstring>
#include <unistd.h>
#include <netinet/in.h>
#include <iostream>

Strecho::Strecho(int connfd, user *u, struct sockaddr sock)
    : connfd_(connfd)
    , u_(u)
    , sock_(sock)
{}
Strecho::~Strecho() {}

bool Strecho::verification(char *buf)
{
    struct sockaddr_in sockin;
    memcpy(&sockin, &sock_, sizeof(sockin));
    uint16_t port = u_->getPortBySockaddrin(sockin);
    char *ipaddr = u_->getIpAddrBySockaddrin(sockin);
    int len = u_->getLen();
    bool findit = false;
    for (int i = 0; i < len; i++) {
        data tdata = u_->getData(i);
        uint16_t tport = u_->getPort(tdata);
        char *tipaddr = u_->getIpAddr(tdata);

        std::cout << tipaddr << std::endl << tport << std::endl;

        if ((strcmp(ipaddr, tipaddr) == 0) && tport == port) {
            findit = true;
            if (tdata.isonline) return false;
            tdata.isonline = true;
            return true;
        }
    }

    if (!findit) {
        // printf("addNewData\n");
        d_ = u_->addNewData(sock_, buf);
    }
    return true;
}

void Strecho::strecho()
{
    // printf("Strecho::strecho\n");
    char buf[MAXLINE];
    memset(buf, 0, sizeof(buf));
    read(connfd_, buf, MAXLINE);

    if (strncmp(buf, "000", 3) == 0) {
        char name[20];
        memset(name, 0, sizeof(name));
        strcpy(name, buf + 3);
        if (verification(name)) {
            // 验证通过
            // printf("verification success\n");
            write(connfd_, "010", sizeof("010"));
            loop();
        } else {
            write(connfd_, "011", sizeof("010"));
        }
    }
    return;
}

void Strecho::loop()
{
    // printf("Strecho::loop\n");

    char buf[MAXLINE];
    memset(buf, 0, sizeof(buf));
    int n;
    for (;;) {
        if ((n = read(connfd_, buf, MAXLINE)) <= 0) {
            // 用户下线
            u_->offline(d_);
            return;
        }

        // 发来的请求是获取活跃列表
        if (strncmp(buf, "101", 3) == 0) {
            // 返回Peerlist列表
            int len = u_->getLen();
            char re[MAXLINE];
            char cport[24];
            memset(re, 0, sizeof(re));
            strcat(re, "110");
            strcat(re, ",");

            for (int i = 0; i < len; i++) {
                // 获取name ipaddr port拼接返回
                data tdata = u_->getData(i);
                if (!tdata.isonline) continue;

                char name[20];
                memset(name, 0, sizeof(name));
                u_->getName(tdata, name);
                char *ipaddr = u_->getIpAddr(tdata);
                uint16_t port = u_->getPort(tdata);

                strcat(re, name);
                strcat(re, ",");
                strcat(re, ipaddr);
                strcat(re, ",");
                memset(cport, 0, sizeof(cport));
                sprintf(cport, "%d", port);
                strcat(re, cport);
                strcat(re, ",");
            }
            std::cout << "RGETLIST = " << re << std::endl;
            // write(connfd_, "test", strlen("test"));
            write(connfd_, re, strlen(re));
        }

        memset(buf, 0, sizeof(buf));
    }
}
