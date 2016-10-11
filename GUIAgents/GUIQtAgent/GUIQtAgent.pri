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
    $$PWD/src/tguiqtagent.h \
    $$PWD/src/tsystemtray.h \
    $$PWD/src/tguiqtapplication.h \
    $$PWD/src/tguiqtfactory.h

SOURCES += \
    $$PWD/src/mainwindow.cpp \
    $$PWD/src/tguiqtagent.cpp \
    $$PWD/src/tsystemtray.cpp \
    $$PWD/src/tguiqtapplication.cpp \
    $$PWD/src/tguiqtfactory.cpp

FORMS += \
    $$PWD/src/mainwindow.ui

RESOURCES += \
    $$PWD/resources.qrc
