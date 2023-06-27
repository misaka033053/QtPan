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
    operdb.cpp \
        widget.cpp \
    tcpserver.cpp \
    tcpsocket.cpp

HEADERS  += widget.h \
    operdb.h \
    tcpserver.h \
    tcpsocket.h

FORMS    += widget.ui
INCLUDEPATH += ../QtPanCommon

RESOURCES += \
    config.qrc
