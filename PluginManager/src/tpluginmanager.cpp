#include "tpluginmanager.h"
#include <vector>
#include <stdio.h>

#if defined(STATIC_LINK_PLUGINS)
    #include <Plugins/PluginEyesRelax/src/teyesrelaxplugin.h>
#endif


TPluginManager::TPluginManager(): IPluginManager()
{}

TPluginManager::~TPluginManager()
{
    for(iterator it = m_plugins.begin(); it != m_plugins.end(); it++ )
    {
        IPlugin* plugin = *it;
        if( plugin )
            delete plugin;
    }
}

IPlugin* TPluginManager::getPlugin(size_t index)
{
    return (index < m_plugins.size()) ? m_plugins.at(index) : NULL;
}

bool TPluginManager::loads()
{
#if defined(STATIC_LINK_PLUGINS)
    m_plugins.push_back(new TEyesReaxPlugin());
#endif
    return true;
}

bool TPluginManager::update()
{
    for( iterator it = m_plugins.begin(); it != m_plugins.end(); it++ )
    {
        IPlugin* plugin = *it;
        if( plugin )
            plugin->update();
    }
    return true;
}

