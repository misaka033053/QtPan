#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QMessageBox>
#include <QDebug>
#include "protocol.h"


TCPClient::TCPClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TCPClient)
{
    ui->setupUi(this);
    loadConfig();
//    connect(&m_tcpScoket, SIGNAL(connected()), this, SLOT(showConnectStatus()));
    connect(&m_tcpScoket, &QTcpSocket::connected, this, &TCPClient::showConnectStatus);
    m_tcpScoket.connectToHost(QHostAddress(m_strIP),m_usPort);
}

TCPClient::~TCPClient()
{
    delete ui;
}

void TCPClient::loadConfig()
{
    qDebug()<<"debug";
//    QFile file(":/client.config");
//    if(file.open(QIODevice::ReadOnly)){
//        QByteArray data = file.readAll();
//        QString strdata = data.toStdString().c_str();
//        file.close();
//        strdata.replace("/r/n"," ");
//        QStringList strList = strdata.split("");
//        if(strList.size()>=2){
//            m_strIP = strList.at(0);
//            m_usPort = strList.at(1).toInt();
//        }
//    }else{
//        QMessageBox::critical(this,"open config","open file failed");
        m_strIP = "127.0.0.1";
        m_usPort = 8888;
//    }
    qDebug()<<"ip: "<<m_strIP<<"  port: "<<m_usPort;
}

void TCPClient::showConnectStatus()
{
    QMessageBox::information(this,"connect Status","Connect OK");
}
