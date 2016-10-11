#ifndef IPLUGIN_H
#define IPLUGIN_H

#include <ttasktreemanager.h>

class IPlugin
{
public:
    IPlugin();
    virtual ~IPlugin();

    virtual const char* getName() const = 0;
    virtual const char* getDescription() const = 0;

    virtual bool init(TTaskTreeManager* taskManager);
    virtual bool update() = 0;

protected:
    TTaskTreeManager*       m_taskManager;
};

#endif // IPLUGIN_H
