#ifndef TCPSOCKET_H
#define TCPSOCKET_H
#include <QTcpSocket>

class TCPSocket : public QTcpSocket
{
    Q_OBJECT
public:
    TCPSocket();

public slots:
    void recvMsg();
};

#endif // TCPSOCKET_H
