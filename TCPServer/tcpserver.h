#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>

class TCPServer : public QTcpServer
{
    Q_OBJECT
public:
    TCPServer();
    static TCPServer &getInstance();
private:
    QString ip;
    int port;
    void loadConfig();
    void incomingConnection();
};

#endif // TCPSERVER_H
