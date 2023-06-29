#ifndef TCPSOCKET_H
#define TCPSOCKET_H
#include <QTcpSocket>
#include "handlers/userhandler.h"

class TCPSocket : public QTcpSocket
{
    Q_OBJECT
public:
    TCPSocket();

private:
    UserHandler* userHandler;

private: signals:
    void insertUser(char* name, char* pwd);


public slots:
    void recvMsg();
};

#endif // TCPSOCKET_H
