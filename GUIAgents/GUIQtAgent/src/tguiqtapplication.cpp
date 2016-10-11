#include "tguiqtapplication.h"
#include <QApplication>

TGuiQtApplication::TGuiQtApplication():
    IGuiApplication(),
    m_application(NULL)
{}

TGuiQtApplication::~TGuiQtApplication()
{
    if(m_application)
        m_application->deleteLater();
}

bool TGuiQtApplication::init(int argc, char *argv[])
{
    m_application = new QApplication(argc, argv);

    return (m_application != NULL);
}

int TGuiQtApplication::run()
{
    if( m_application == NULL)
        return -1;
    return m_application->exec();
}

