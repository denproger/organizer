#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T16:04:06
#
#-------------------------------------------------

TASK_TREE_MANAGER_PATH = $$PWD

#include (libs/jsoncpp/JsonCpp.pri)

DEPENDPATH  += \
    $$TASK_TREE_MANAGER_PATH/ \
    $$TASK_TREE_MANAGER_PATH/src/ \
    $$TASK_TREE_MANAGER_PATH/src/Common \
    $$TASK_TREE_MANAGER_PATH/src/Tasks \
    $$TASK_TREE_MANAGER_PATH/src/Sources

INCLUDEPATH += \
    $$TASK_TREE_MANAGER_PATH/ \
    $$TASK_TREE_MANAGER_PATH/src/ \
    $$TASK_TREE_MANAGER_PATH/src/Common \
    $$TASK_TREE_MANAGER_PATH/src/Tasks \
    $$TASK_TREE_MANAGER_PATH/src/Sources

HEADERS += \
    $$TASK_TREE_MANAGER_PATH/src/Common/ttypes.h \
    $$TASK_TREE_MANAGER_PATH/src/Common/turl.h \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttasknode.h \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttaskproperty.h \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/tvalue.h \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttasktree.h \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tabstractsource.h \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tsourcesfactory.h \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tsourcejsonfile.h \
    $$TASK_TREE_MANAGER_PATH/src/ttasktreemanager.h

SOURCES += \
    $$TASK_TREE_MANAGER_PATH/src/Common/turl.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Common/ttypes.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttasknode.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttaskproperty.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/tvalue.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Tasks/ttasktree.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tabstractsource.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tsourcesfactory.cpp \
    $$TASK_TREE_MANAGER_PATH/src/Sources/tsourcejsonfile.cpp \
    $$TASK_TREE_MANAGER_PATH/src/ttasktreemanager.cpp






