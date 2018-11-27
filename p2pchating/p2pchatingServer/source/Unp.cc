#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>
#include "Unp.h"
#include "Define.h"

Unp::Unp() {}
Unp::~Unp() {}

int Unp::init()
{
    int listenfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in servaddr;
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    bind(listenfd, (SA *) &servaddr, sizeof(servaddr));
    listen(listenfd, LISTENQ);

    return listenfd;
}