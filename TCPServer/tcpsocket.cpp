#include "tcpsocket.h"
#include <QDebug>
#include "protocol.h"

TCPSocket::TCPSocket()
{
    userHandler = UserHandler::getInstance();
    connect(this,&QTcpSocket::readyRead,this,&TCPSocket::recvMsg);
    connect(this,&TCPSocket::insertUser, userHandler, &UserHandler::insertUser);
}

void TCPSocket::recvMsg()
{
    qDebug()<<this->bytesAvailable();
    uint uiPDLen = 0;
    this->read((char*)&uiPDLen, sizeof(uint));

    uint uiMsgLen = uiPDLen - sizeof(PDU);
    PDU* pdu = panProtocol::mkPDU(uiMsgLen);
    this->read((char*)pdu+sizeof(uint), uiPDLen-sizeof(uint));
    char name[32] = {'\0'};
    char pwd[32] = {'\0'};
    strncpy(name, pdu->caData, 32);
    strncpy(pwd, pdu->caData+32, 32);
    qDebug()<<name<<" "<<pwd;

    if(pdu->uiMshType==ENUM_MSG_TYPE_REGIST_REQUEST){
        emit this->insertUser(name, pwd);
    }
}

