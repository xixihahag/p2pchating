#ifndef __STROECHO_H__
#define __STROECHO_H__

#include "User.h"
#include <string>

class Strecho
{
  public:
    // 这里u拿过来的是不是引用？
    Strecho(int connfd, user *u, struct sockaddr sock);
    ~Strecho();
    void strecho();

  private:
    int connfd_;
    user *u_;
    data *d_;
    struct sockaddr sock_;
    bool verification(char *buf);
    void loop();
};

#endif // __STROECHO_H__