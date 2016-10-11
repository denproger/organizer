#ifndef IPLUGINMANAGER_H
#define IPLUGINMANAGER_H

#include <iplugin.h>
#include <cstring>

class IPluginManager
{
public:
    IPluginManager();
    virtual ~IPluginManager();

    virtual int getPluginCount() const = 0;
    virtual IPlugin* getPlugin(size_t index) = 0;

    virtual bool loads() = 0;
    virtual bool update() = 0;
};

#endif // IPLUGINMANAGER_H
