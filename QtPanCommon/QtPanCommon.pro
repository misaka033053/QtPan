#-------------------------------------------------
#
# Project created by QtCreator 2023-06-26T17:26:01
#
#-------------------------------------------------

QT       -= gui

TARGET = QtPanCommon
TEMPLATE = lib

DEFINES += QTPANCOMMON_LIBRARY

SOURCES += \
    protocol.cpp

HEADERS +=\
        qtpancommon_global.h \
    protocol.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
