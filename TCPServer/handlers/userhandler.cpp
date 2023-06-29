#include "userhandler.h"
#include<QDebug>

UserHandler::UserHandler(QObject *parent)
    : QObject{parent}
{

}

UserHandler *UserHandler::getInstance()
{
    static UserHandler userhandler;
    return &userhandler;
}

void UserHandler::insertUser(char *name, char *pwd)
{
    qDebug()<<"handlers  "<<name<<"  "<<pwd;
}
