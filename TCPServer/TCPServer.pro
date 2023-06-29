#-------------------------------------------------
#
# Project created by QtCreator 2023-06-26T16:00:29
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCPServer
TEMPLATE = app


SOURCES += main.cpp\
    handlers/userhandler.cpp \
    tool/operdb.cpp \
    tool/dbtool.cpp \
        widget.cpp \
    tcpserver.cpp \
    tcpsocket.cpp


HEADERS  += widget.h \
    handlers/userhandler.h \
    tcpserver.h \
    tcpsocket.h \
    tool/dbtool.h\
    tool/operdb.h

FORMS    += widget.ui
INCLUDEPATH += ../QtPanCommon

RESOURCES += \
    config.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtPanCommon/release/ -lQtPanCommon
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtPanCommon/debug/ -lQtPanCommon
else:unix: LIBS += -L$$OUT_PWD/../QtPanCommon/ -lQtPanCommon

INCLUDEPATH += $$PWD/../QtPanCommon
DEPENDPATH += $$PWD/../QtPanCommon
