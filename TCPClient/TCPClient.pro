#-------------------------------------------------
#
# Project created by QtCreator 2023-06-26T10:08:30
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCPClient
TEMPLATE = app


SOURCES += main.cpp\
        tcpclient.cpp

HEADERS  += tcpclient.h

FORMS    += tcpclient.ui

RESOURCES += \
    config.qrc
