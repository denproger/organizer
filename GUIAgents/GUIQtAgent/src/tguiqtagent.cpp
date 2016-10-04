#include "tguiqtagent.h"
#include <QApplication>

TGUIQtAgent::TGUIQtAgent(): IGUIAgent(),
    m_mainWindow(NULL)
{}

TGUIQtAgent::~TGUIQtAgent()
{
    if(m_mainWindow)
        delete m_mainWindow;
}

bool TGUIQtAgent::init(TTaskTreeManager* taskTreeMananger,
                       IPluginManager* pluginManager)
{
    return IGUIAgent::init(taskTreeMananger, pluginManager);
}

int TGUIQtAgent::run(int argc, char *argv[])
{
    QApplication app(argc, argv);

    m_mainWindow = new MainWindow();
    //m_mainWindow->show();

    return app.exec();
}

