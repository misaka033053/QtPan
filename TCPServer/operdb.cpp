#include "operdb.h"
#include <QMessageBox>
#include <QDebug>

OperDB::OperDB(QObject *parent)
    : QObject{parent}
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    init();
}

OperDB::~OperDB()
{
    m_db.close();
}

OperDB &OperDB::getInstance()
{
    static OperDB instance;
    return instance;
}

void OperDB::init()
{
    m_db.setHostName("localhost");
    m_db.setDatabaseName(db_path);
    qDebug()<<m_db<<Qt::endl;
    if(m_db.open()){

    }else{
        qDebug()<<m_db.lastError();
        QMessageBox::information(NULL,"open DB failed","open DB failed");
    }
}
