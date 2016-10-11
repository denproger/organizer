#ifndef TAPPLICATION_H
#define TAPPLICATION_H

#include <iguiapplication.h>
#include <iguiagent.h>
#include <iguifactory.h>
#include <tsettingdata.h>
#include <ttasktreemanager.h>
#include <tpluginmanager.h>

class TApplication
{
public:
    TApplication();
    ~TApplication();

    bool init(int argc, char *argv[]);
    int run();

protected:
    bool createGui();

    bool initSettings();
    bool initTaskTreeManager();
    bool initPluginManager();

private:
    IGuiFactory*            m_guiFactory;
    IGuiApplication*        m_guiApplication;
    IGuiAgent*              m_guiAgent;

    TSettingData*           m_settingData;

    TTaskTreeManager*       m_taskTreeManager;
    TPluginManager*         m_pluginManager;

};

#endif // TAPPLICATION_H
