#-------------------------------------------------
#
# Project created by QtCreator 2016-10-03T16:05:49
#
#-------------------------------------------------

DEPENDPATH  += \
    $$PWD/ \
    $$PWD/src/

INCLUDEPATH += \
    $$PWD \
    $$PWD/src/

include(../Interfaces/Interfaces.pri)

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS  += \
    $$PWD/src/mainwindow.h \
    $$PWD/src/tguiqtagent.h

SOURCES += \
    $$PWD/src/mainwindow.cpp \
    $$PWD/src/tguiqtagent.cpp

FORMS += \
    $$PWD/src/mainwindow.ui
