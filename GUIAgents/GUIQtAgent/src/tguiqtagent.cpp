#include "tguiqtagent.h"
#include <tsystemtray.h>
#include <QApplication>
#include <QDir>
#include <QFileInfo>
#include <QStandardPaths>

TGuiQtAgent::TGuiQtAgent(): IGuiAgent(),
    m_mainWindow(NULL),
    m_systemTray(NULL)
{}

TGuiQtAgent::~TGuiQtAgent()
{
    if(m_mainWindow)
        delete m_mainWindow;
    if(m_systemTray)
        delete m_systemTray;
}

bool TGuiQtAgent::init(TTaskTreeManager* taskTreeMananger,
                       IPluginManager* pluginManager)
{
    if( !(IGuiAgent::init(taskTreeMananger, pluginManager)) )
        return false;

    createMainWindow();
    createSystemTray();

    return true;
}

TString TGuiQtAgent::getConfigPath()
{
    return QStandardPaths::standardLocations(QStandardPaths::ConfigLocation)[0];
}

void TGuiQtAgent::show()
{
    m_systemTray->show();
    //m_mainWindow->show();
}

void TGuiQtAgent::createMainWindow()
{
    m_mainWindow = new MainWindow();
}

void TGuiQtAgent::createSystemTray()
{
    m_systemTray = new TSystemTray(NULL);
    QObject::connect(m_systemTray, &TSystemTray::exitPressed, m_mainWindow, &MainWindow::activateExit);
}

