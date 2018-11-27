/*
 * File: server.cc
 * brief:
 * 服务器主程序
 * Author: gyz
 * Email: mni_gyz@163.com
 * Last Modified: Saturday, 13th October 2018 1:37:44 pm
 * -----
 * Copyright 2018 - 2018
 */

#include <unistd.h>
#include <stdio.h>
#include <malloc.h>
#include <cstring>
#include <string.h>
#include <iostream>
#include "./include/Server.h"
#include "./include/Define.h"
#include "./include/Unp.h"
#include "./include/User.h"
#include "./include/Strecho.h"

static void *doit(void *arg);
static user *u;
SA sock;

int main(int argc, char const *argv[])
{
    // 初始化用户数据列表
    u = new user();

    Unp unp;
    int listenfd = unp.init();
    pthread_t pid;
    int *connfd;
    socklen_t len = sizeof(sock);

    for (;;) {
        connfd = (int *) malloc(sizeof(int));
        *connfd = accept(listenfd, &sock, &len);
        pthread_create(&pid, NULL, &doit, connfd);
    }

    return 0;
}

static void *doit(void *arg)
{
    printf("diot\n");
    int connfd = *((int *) arg);
    free(arg);
    pthread_detach(pthread_self());
    Strecho *s = new Strecho(connfd, u, sock);
    s->strecho();
    free(s);
    close(connfd);
}
