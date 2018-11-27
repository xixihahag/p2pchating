#include "User.h"
#include <stdio.h>
#include <cstring>
#include <arpa/inet.h>

// #include <iostream>
// using namespace std;

user::user()
    : len(0)
{}
user::~user() {}

int user::getLen() { return len; }
data user::getData(int i) { return data_[i]; }
data *user::addNewData(struct sockaddr sock, char *buf)
{
    // printf("user::addNewData len = %d\n", len);

    // cout << "user::addNewData - buf = " << buf << endl;
    data_[len].sockaddr_ = sock;
    memset(data_[len].name_, 0, sizeof(data_[len].name_));
    strcpy(data_[len].name_, buf);
    data_[len].time_ = 0;
    data_[len].isonline = true;

    return &data_[len++];
}

uint16_t user::getPort(data d)
{
    struct sockaddr_in sockin;
    memcpy(&sockin, &d.sockaddr_, sizeof(sockin));
    return getPortBySockaddrin(sockin);
}

char *user::getIpAddr(data d)
{
    struct sockaddr_in sockin;
    memcpy(&sockin, &d.sockaddr_, sizeof(sockin));
    return getIpAddrBySockaddrin(sockin);
}

uint16_t user::getPortBySockaddrin(struct sockaddr_in sockin)
{
    return ntohs(sockin.sin_port);
}

char *user::getIpAddrBySockaddrin(struct sockaddr_in sockin)
{
    return inet_ntoa(sockin.sin_addr);
}

void user::getName(data d, char *name)
{
    // cout << "user::getName - d.name+ = " << d.name_ << endl;
    strcpy(name, d.name_);
    // cout << "name = " << name << endl;
}

void user::offline(data *d)
{
    struct sockaddr_in sockin;
    memcpy(&sockin, &d->sockaddr_, sizeof(sockin));
    for (int i = 0; i < len; i++) {
        struct sockaddr_in tsockin;
        memcpy(&tsockin, &data_[i].sockaddr_, sizeof(sockin));
        if ((strcmp(
                 (inet_ntoa(tsockin.sin_addr)), (inet_ntoa(sockin.sin_addr))) ==
             0) &&
            ((ntohs(tsockin.sin_port)) == (ntohs(sockin.sin_port)))) {
            printf("a user offline\n");
            data_[i].isonline = false;
            break;
        }
    }
}