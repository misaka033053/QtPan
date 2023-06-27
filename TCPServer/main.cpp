#include "widget.h"
#include <QApplication>
#include "operdb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    OperDB::getInstance();
    return a.exec();
}
