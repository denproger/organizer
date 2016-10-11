#include "iplugin.h"
#include <ttasktreemanager.h>

IPlugin::IPlugin():
    m_taskManager(NULL)
{}

IPlugin::~IPlugin()
{}

bool IPlugin::init(TTaskTreeManager *taskManager)
{
    m_taskManager = taskManager;
    return true;
}

