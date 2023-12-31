#ifndef PROTOCOL
#define PROTOCOL

#include <stdlib.h>
#include <string.h>
#include<qtpancommon_global.h>

typedef unsigned int uint;

enum ENUM_MSG_TYPE{
    ENUM_MSG_TYPE_MIN=0,
    ENUM_MSG_TYPE_REGIST_REQUEST,
    ENUM_MSG_TYPE_REGIST_RESPONSE,

    ENUM_MSG_TYPE_MAX=0x00ffffff
};

struct PDU{
    uint uiPDULen;//协议单元总大小
    uint uiMshType;//消息类型
    char caData[64];
    uint uiMsgLen;//实际消息长度
    int caMsg[];//实际消息
};


class QTPANCOMMONSHARED_EXPORT panProtocol{

public:
    static PDU *mkPDU(uint uiMsgLen);

};

#endif // PROTOCOL
