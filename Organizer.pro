#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T16:04:06
#
#-------------------------------------------------

QT       -= core
QT       -= gui

TARGET = organiger
TEMPLATE = app
CONFIG   += console
CONFIG   -= app_bundle
CONFIG += c++11
QT -= gui


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
    DEFINES += USE_QT
}
!use_qt {
    QT -= core
}

DEPENDPATH  += \
    src/Common \
    src/Tasks \
    src/Sources

INCLUDEPATH += \
    src/Common \
    src/Tasks \
    src/Sources

HEADERS += \
    src/Common/ttypes.h \
    src/Common/turl.h \
    src/Tasks/ttasknode.h \
    src/Tasks/ttaskproperty.h \
    src/Tasks/tvalue.h \
    src/Tasks/ttasktree.h \
    src/Sources/tabstractsource.h \
    src/Sources/tsourcesfactory.h \
    src/Sources/tsourcejsonfile.h \
    src/ttasktreemanager.h

SOURCES += \
    src/Common/turl.cpp \
    src/Common/ttypes.cpp \
    src/Tasks/ttasknode.cpp \
    src/Tasks/ttaskproperty.cpp \
    src/Tasks/tvalue.cpp \
    src/Tasks/ttasktree.cpp \
    src/Sources/tabstractsource.cpp \
    src/Sources/tsourcesfactory.cpp \
    src/Sources/tsourcejsonfile.cpp \
    src/ttasktreemanager.cpp \
    src/main.cpp \






