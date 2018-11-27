/*
 * File: user.h
 * brief:
 * 保存用户信息的类
 * Author: gyz
 * Email: mni_gyz@163.com
 * Last Modified: Saturday, 13th October 2018 1:46:36 pm
 * -----
 * Copyright 2018 - 2018
 */
#ifndef __USER_H__
#define __USER_H__

#include <sys/socket.h>
#include <string>
#include "Define.h"
#include "Data.h"

class user
{
  private:
    data data_[MAX_NUM];
    int len; // 记录当前data_长度 已注册人数

  public:
    user();
    ~user();

    int getLen();
    data getData(int i);
    data *addNewData(struct sockaddr sock, char *buf);
    uint16_t getPort(data d);
    char *getIpAddr(data d);
    uint16_t getPortBySockaddrin(struct sockaddr_in sockin);
    char *getIpAddrBySockaddrin(struct sockaddr_in sockin);
    void getName(data d, char *name);
    void offline(data *d);
};

#endif //__USER_H__