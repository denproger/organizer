#include "tguiqtapplication.h"
#include <QApplication>
#include <QScopedPointer>

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
    QScopedPointer<QApplication> app(m_application);

    return app->exec();
}

