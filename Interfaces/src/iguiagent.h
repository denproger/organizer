#ifndef IGUIAGENT_H
#define IGUIAGENT_H

#include <ipluginmanager.h>

class TTaskTreeManager;
class IGUIAgent
{
public:
    IGUIAgent();
    virtual ~IGUIAgent();

    TTaskTreeManager* getTaskTreeMananger() const { return m_taskTreeMananger; }
    IPluginManager* getPluginManager() const { return m_pluginManager; }

    virtual bool init(TTaskTreeManager* taskTreeMananger,
                      IPluginManager* pluginManager);
    virtual int run(int argc, char *argv[]) = 0;

protected:
    TTaskTreeManager*       m_taskTreeMananger;
    IPluginManager*         m_pluginManager;
};

#endif // IGUIAGENT_H
