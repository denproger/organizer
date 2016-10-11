#include "tapplication.h"

#if defined(USE_QT)
    #include <tguiqtfactory.h>
    #include <tguiqtapplication.h>
    #include <tguiqtagent.h>
    #include <QDebug>
#endif

TApplication::TApplication():
    m_guiFactory(NULL),
    m_guiApplication(NULL),
    m_guiAgent(NULL),
    m_settingData(NULL),
    m_taskTreeManager(NULL),
    m_pluginManager(NULL)
{
    #if defined(USE_QT)
        m_guiFactory = new TGuiQtFactory();
    #endif
}

TApplication::~TApplication()
{
    //if(m_guiAgent)
    //    delete m_guiAgent;
    //if(m_guiApplication)
    //    delete m_guiApplication;
    //if(m_guiFactory)
    //    delete m_guiFactory;
    if(m_pluginManager)
        delete m_pluginManager;
    if(m_taskTreeManager)
        delete m_taskTreeManager;
    if(m_settingData)
        delete m_settingData;
}

bool TApplication::init(int argc, char *argv[])
{
    (void)(argc);
    (void)(argv);

    if( !(createGui()) )
        return false;
    if( !(m_guiApplication->init(argc, argv)) )
        return false;

    if( !(initSettings()) )
        return false;
    if( !(initTaskTreeManager()) )
        return false;
    if( !(initPluginManager()) )
        return false;

    qDebug() << m_guiAgent->getConfigPath();

    return m_guiAgent->init(m_taskTreeManager, m_pluginManager);
}

int TApplication::run()
{
    m_guiAgent->show();
    return m_guiApplication->run();
}

bool TApplication::createGui()
{
    if( !(m_guiFactory) )
        return false;

    m_guiApplication = m_guiFactory->getGuiApplication();
    m_guiAgent = m_guiFactory->getGuiAgent();

    return (m_guiApplication) && (m_guiAgent);
}

bool TApplication::initSettings()
{
    m_settingData = new TSettingData();
    return true;
}

bool TApplication::initTaskTreeManager()
{
    m_taskTreeManager = new TTaskTreeManager();
    return true;
}

bool TApplication::initPluginManager()
{
    m_pluginManager = new TPluginManager();
    return true;
}

