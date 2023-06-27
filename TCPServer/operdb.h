#ifndef OPERDB_H
#define OPERDB_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class OperDB : public QObject
{
    Q_OBJECT
public:
    explicit OperDB(QObject *parent = nullptr);
    ~OperDB();
    static OperDB &getInstance();

signals:

public slots:

private:
    QSqlDatabase m_db;
    void init();
    QString db_path = "E:\\EssentialC++\\QtPan\\TCPServer\\cloud.db";

};

#endif // OPERDB_H
