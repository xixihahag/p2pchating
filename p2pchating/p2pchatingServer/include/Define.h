#ifndef __DEFINE_H__
#define __DEFINE_H__

#define SA struct sockaddr
#define MAX_NUM 1024
#define MAXLINE 1024
#define SERV_PORT 9877
#define LISTENQ 64

#define LOGIN 000    // 登录识别码
#define MSG 001      // 发送消息识别码
#define RMSG 100     // 接收消息识别码
#define GEILIST 101  // 客户端获取在线列表识别码
#define RGETLIST 110 // 回复客户端获取在线列表识别码
#define LOGSUCC 010  // 登录成功识别码
#define LOGFAIL 011  // 登录失败识别码

#endif // __DEFINE_H__