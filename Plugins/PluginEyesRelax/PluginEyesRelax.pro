#-------------------------------------------------
#
# Project created by QtCreator 2016-10-10T17:02:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PluginEyesRelax
TEMPLATE = lib

CONFIG += c++11
CONFIG(debug, debug|release) {
    CONFIG -= debug release
    CONFIG += debug
    DEFINES += DEBUG
}
CONFIG(release, debug|release) {
    CONFIG -= debug release
    CONFIG += release
}

CONFIG *= use_qt
use_qt {
    QT += core
    QT += gui
    DEFINES += USE_QT
}
!use_qt {
    QT -= core
    QT -= gui
    CONFIG   += console
    CONFIG   -= app_bundle
}

DESTDIR = $${_PRO_FILE_PWD_}/../../libs/

include(../../Interfaces/Interfaces.pri)
include(../../TaskTreeManager/TaskTreeManager.pri)

DEPENDPATH  += \
    src/

INCLUDEPATH += \
    src/

HEADERS  += \
    src/eyesrelaxwidget.h \
    src/teyesrelaxplugin.h

SOURCES += \
    src/eyesrelaxwidget.cpp \
    src/teyesrelaxplugin.cpp

FORMS += \
    src/eyesrelaxwidget.ui
