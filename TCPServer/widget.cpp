#include "widget.h"
#include "ui_widget.h"
#include "tcpserver.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    loadConfig();
    TCPServer::getInstance().listen(QHostAddress(ip),port);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::loadConfig()
{
    ip = "127.0.0.1";
    port = 8888;
}
