#include "tcpserver.h"
#include <QHostAddress>
#include <QDebug>
TCPServer::TCPServer()
{
    loadConfig();
    getInstance().listen(QHostAddress(ip),port);
}

TCPServer &TCPServer::getInstance()
{
    static TCPServer instance;
    return instance;
}

void TCPServer::loadConfig()
{
    ip = "127.0.0.1";
    port = 8888;
}

void TCPServer::incomingConnection(qintptr handle)
{
    qDebug()<<"new client connected";
}

