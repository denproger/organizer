#include "tsystemtray.h"
#include <QMenu>
#include <QApplication>

TSystemTray::TSystemTray(QWidget *parentWidget, QObject *parent) :
    QObject(parent),
    m_parentWidget(parentWidget),
    m_systemTrayIcon(NULL),
    m_contextMenu(NULL)
{
    createTray();
    createConnections();
}

TSystemTray::~TSystemTray()
{
    if( m_systemTrayIcon)
        delete m_systemTrayIcon;
}

void TSystemTray::show()
{
    if( m_systemTrayIcon )
        m_systemTrayIcon->show();
}

void TSystemTray::createTray()
{
    m_systemTrayIcon = new QSystemTrayIcon(QIcon(":/resources/Images/mainicon_tray.png"), m_parentWidget);
    m_contextMenu = new QMenu(m_parentWidget);
    //trayIconMenu = new QMenu(mainWindow);

    m_pluginsMenu = new QMenu(QString::fromUtf8("Модули"), m_parentWidget);
    m_exitAction = new QAction(QString::fromUtf8("Выход"), m_parentWidget);

    m_contextMenu->addMenu(m_pluginsMenu);
    m_contextMenu->addSeparator();
    m_contextMenu->addAction(m_exitAction);

    m_systemTrayIcon->setContextMenu(m_contextMenu);
}

void TSystemTray::createConnections()
{
    connect(m_exitAction, &QAction::triggered, this, &TSystemTray::exitPressed );
}

