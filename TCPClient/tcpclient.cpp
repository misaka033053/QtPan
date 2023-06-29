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
    resize(500,300);
    loadConfig();
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
    QFile file(":/client.config");
    qDebug()<<"permissions:"<<file.permissions();
    if(file.open(QIODevice::ReadOnly)){
        QByteArray data = file.readAll();
        QString strdata = data.toStdString().c_str();

        file.close();
        strdata.replace("\r\n"," ");
        qDebug()<<strdata;
        QStringList strList = strdata.split(" ");
        qDebug()<<strList.size();
        if(strList.size()>=2){
            m_strIP = strList.at(0);
            m_usPort = strList.at(1).toInt();
        }
    }else{
        QMessageBox::critical(this,"open config","open file failed");
        m_strIP = "127.0.0.1";
        m_usPort = 8888;
    }
    qDebug()<<"ip: "<<m_strIP<<"  port: "<<m_usPort;
}

void TCPClient::showConnectStatus()
{
    QMessageBox::information(this,"connect Status","Connect OK");
}

void TCPClient::on_login_clicked()
{
    QString name = ui->name->text();
    QString pwd  = ui->name->text();
    if(!name.isEmpty()&&!pwd.isEmpty()){

    }
}


void TCPClient::on_registe_clicked()
{
    QString name = ui->name->text();
    QString pwd  = ui->pwd->text();
    if(!name.isEmpty()&&!pwd.isEmpty()){
        panProtocol p;
        PDU *pdu = p.mkPDU(0);
        qDebug()<<"create success";
        pdu->uiMshType = ENUM_MSG_TYPE_REGIST_REQUEST;
        strncpy(pdu->caData,name.toStdString().c_str(),32);
        strncpy(pdu->caData+32,pwd.toStdString().c_str(),32);
        m_tcpScoket.write((char*)pdu, pdu->uiPDULen);
        free(pdu);
        pdu = NULL;
    }

}


void TCPClient::on_logout_clicked()
{

}

