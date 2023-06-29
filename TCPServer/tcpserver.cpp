#include "tcpserver.h"
#include <QHostAddress>
#include <QDebug>
TCPServer::TCPServer()
{

}

TCPServer &TCPServer::getInstance()
{
    static TCPServer instance;
    return instance;
}


void TCPServer::incomingConnection(qintptr handle)
{
    qDebug()<<"new client connected";
    TCPSocket* pTcpSocket = new TCPSocket;
    pTcpSocket->setSocketDescriptor(handle);
    m_tcpSocketList.append(pTcpSocket);
}

