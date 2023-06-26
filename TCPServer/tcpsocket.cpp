#include "tcpsocket.h"
#include <QDebug>

TCPSocket::TCPSocket()
{
    connect(this,&QTcpSocket::readyRead,this,&TCPSocket::recvMsg);
}

void TCPSocket::recvMsg()
{
    qDebug()<<this->bytesAvailable();
}

