#include "tpluginmanager.h"
#include <vector>
#include <stdio.h>

TPluginManager::TPluginManager(): IPluginManager()
{}

IPlugin *TPluginManager::getPlugin(size_t index)
{
    return (index >= 0 && index < m_plugins.size()) ? m_plugins.at(index) : NULL;
}

bool TPluginManager::loads()
{
    return true;
}

bool TPluginManager::update()
{
    return true;
}

