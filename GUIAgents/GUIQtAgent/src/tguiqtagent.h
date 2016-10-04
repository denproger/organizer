#ifndef TGUIQTAGENT_H
#define TGUIQTAGENT_H

#include <iguiagent.h>
#include "mainwindow.h"

class TGUIQtAgent: public IGUIAgent
{
public:
    TGUIQtAgent();
    virtual ~TGUIQtAgent();

    virtual bool init(TTaskTreeManager* taskTreeMananger,
                      IPluginManager* pluginManager);
    virtual int run(int argc, char *argv[]);
private:
    MainWindow*         m_mainWindow;
};

#endif // TGUIAGENT_H
