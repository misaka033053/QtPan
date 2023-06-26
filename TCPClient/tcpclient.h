#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <stdlib.h>
#include <QWidget>
#include <QFile>
#include <QByteArray>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class TCPClient;
}

class TCPClient : public QWidget
{
    Q_OBJECT

public:
    explicit TCPClient(QWidget *parent = 0);
    ~TCPClient();
    void loadConfig();

public slots:
    void showConnectStatus();

private:
    Ui::TCPClient *ui;
    QString m_strIP;
    int m_usPort;
    QTcpSocket m_tcpScoket;
};

#endif // TCPCLIENT_H
