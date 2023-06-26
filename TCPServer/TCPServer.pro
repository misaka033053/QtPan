#-------------------------------------------------
#
# Project created by QtCreator 2023-06-26T16:00:29
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCPServer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    tcpserver.cpp \
    tcpsocket.cpp

HEADERS  += widget.h \
    tcpserver.h \
    tcpsocket.h

FORMS    += widget.ui
INCLUDEPATH += ../QtPanCommon
