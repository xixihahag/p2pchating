#ifndef __DATA_H__
#define __DATA_H__

#include "Define.h"
#include <netinet/in.h>

struct Data
{
    char name_[20]; // 客户端自己起的名字
    SA sockaddr_;   // 保存ip地址和端口信息
    int time_;      // 记录上次登记过后经过的时间
    bool isonline;  // 记录当前是否在线
};

typedef struct Data data;

#endif // __DATA_H__