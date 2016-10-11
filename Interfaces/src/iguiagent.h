#ifndef IGUIAGENT_H
#define IGUIAGENT_H

#include <ipluginmanager.h>
#include <ttypes.h>
#include <string>

class TTaskTreeManager;
class IGuiAgent
{
public:
    IGuiAgent();
    virtual ~IGuiAgent();

    TTaskTreeManager* getTaskTreeMananger() const { return m_taskTreeMananger; }
    IPluginManager* getPluginManager() const { return m_pluginManager; }

    virtual bool init(TTaskTreeManager* taskTreeMananger,
                      IPluginManager* pluginManager);
    virtual TString getConfigPath() = 0;
    virtual void show() = 0;

protected:
    TTaskTreeManager*       m_taskTreeMananger;
    IPluginManager*         m_pluginManager;
};

#endif // IGUIAGENT_H
