#ifndef DBTOOL_H
#define DBTOOL_H

#include <QObject>

class DBTool : public QObject
{
    Q_OBJECT
public:
    explicit DBTool(QObject *parent = nullptr);

signals:

};

#endif // DBTOOL_H
