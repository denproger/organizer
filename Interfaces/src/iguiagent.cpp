#include "iguiagent.h"
#include <stdio.h>
#include <stdlib.h>

IGuiAgent::IGuiAgent():
    m_taskTreeMananger(NULL),
    m_pluginManager(NULL)
{}

IGuiAgent::~IGuiAgent()
{}

bool IGuiAgent::init(TTaskTreeManager *taskTreeMananger, IPluginManager *pluginManager)
{
    m_taskTreeMananger = taskTreeMananger;
    m_pluginManager = pluginManager;

    return true;
}
