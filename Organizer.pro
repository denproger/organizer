#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T16:04:06
#
#-------------------------------------------------

TARGET = organiger
TEMPLATE = app

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

include (Interfaces/Interfaces.pri)
include (TaskTreeManager/TaskTreeManager.pri)
include (PluginManager/PluginManager.pri)
include (GUIAgents/GUIQtAgent/GUIQtAgent.pri)

DEPENDPATH  += \
    src/

INCLUDEPATH += \
    src/

HEADERS += \
    src/tapplication.h \
    src/tsettingdata.h

SOURCES += \
    src/main.cpp \
    src/tapplication.cpp \
    src/tsettingdata.cpp






