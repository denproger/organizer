#include "iguiagent.h"
#include <stdio.h>
#include <stdlib.h>

IGUIAgent::IGUIAgent():
    m_taskTreeMananger(NULL),
    m_pluginManager(NULL)
{}

IGUIAgent::~IGUIAgent()
{}

bool IGUIAgent::init(TTaskTreeManager *taskTreeMananger, IPluginManager *pluginManager)
{
    m_taskTreeMananger = taskTreeMananger;
    m_pluginManager = pluginManager;

    return true;
}
