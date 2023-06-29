#ifndef USERHANDLER_H
#define USERHANDLER_H

#include <QObject>

class UserHandler : public QObject
{
    Q_OBJECT
public:
    explicit UserHandler(QObject *parent = nullptr);
    static UserHandler* getInstance();

signals:

public slots:
    void insertUser(char* name, char* pwd);

};

#endif // USERHANDLER_H
