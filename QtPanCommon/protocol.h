#ifndef PROTOCOL
#define PROTOCOL

#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;


struct PDU{
    uint uiPDULen;//协议单元总大小
    uint uiMshType;//消息类型
    char caData[64];
    uint uiMsgLen;//实际消息长度
    int caMsg[];//实际消息
};

PDU *mkPDU(uint uiMsgLen);

#endif // PROTOCOL
