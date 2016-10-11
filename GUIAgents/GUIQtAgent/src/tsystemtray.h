#ifndef TSYSTEMTRAY_H
#define TSYSTEMTRAY_H

#include <QObject>
#include <QWidget>
#include <QMenu>
#include <QSystemTrayIcon>

class TSystemTray : public QObject
{
    Q_OBJECT
public:
    explicit TSystemTray(QWidget* parentWidget, QObject *parent = 0);
    ~TSystemTray();

    void show();

signals:
    void exitPressed();

protected:
    void createTray();
    void createConnections();

private:
    QWidget*                m_parentWidget;
    QSystemTrayIcon*        m_systemTrayIcon;

    QMenu*                  m_contextMenu;
    QMenu*                  m_pluginsMenu;
    QAction*                m_exitAction;
};

#endif // TSYSTEMTRAY_H
