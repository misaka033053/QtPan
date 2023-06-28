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

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtPanCommon/release/ -lQtPanCommon
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtPanCommon/debug/ -lQtPanCommon
else:unix: LIBS += -L$$OUT_PWD/../QtPanCommon/ -lQtPanCommon

INCLUDEPATH += $$PWD/../QtPanCommon
DEPENDPATH += $$PWD/../QtPanCommon
