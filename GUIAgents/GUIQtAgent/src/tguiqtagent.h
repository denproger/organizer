#ifndef TGUIQTAGENT_H
#define TGUIQTAGENT_H

#include <iguiagent.h>
#include <ttypes.h>
#include "mainwindow.h"

class TSystemTray;
class TGuiQtAgent: public IGuiAgent
{
public:
    TGuiQtAgent();
    virtual ~TGuiQtAgent();

    virtual bool init(TTaskTreeManager* taskTreeMananger,
                      IPluginManager* pluginManager);
    virtual TString getConfigPath();
    virtual void show();

protected:
    void createMainWindow();
    void createSystemTray();

private:
    MainWindow*         m_mainWindow;
    TSystemTray*        m_systemTray;
};

#endif // TGUIAGENT_H
