#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include "tcpsocket.h"

class TCPServer : public QTcpServer
{
    Q_OBJECT
public:
    TCPServer();
    static TCPServer &getInstance();
private:
    void incomingConnection(qintptr handle);

    QList<TCPSocket*> m_tcpSocketList;
};

#endif // TCPSERVER_H
