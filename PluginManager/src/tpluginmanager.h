#ifndef TPLUGINMANAGER_H
#define TPLUGINMANAGER_H

#include <vector>
#include <iplugin.h>
#include <ipluginmanager.h>

class TPluginManager: public IPluginManager
{
public:
    TPluginManager();
    virtual ~TPluginManager();

    bool detectPlugins();

    virtual int getPluginCount() const { return m_plugins.size(); }
    virtual IPlugin* getPlugin(size_t index);

    virtual bool loads();
    virtual bool update();

protected:
    typedef std::vector< IPlugin* >     PluginList;
    typedef PluginList::iterator        iterator;

private:
    PluginList              m_plugins;
};

#endif // TPLUGINMANAGER_H
