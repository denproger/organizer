#ifndef TGUIQTAPPLICATION_H
#define TGUIQTAPPLICATION_H

#include <iguiapplication.h>
#include <QApplication>

class TGuiQtApplication: public IGuiApplication
{
public:
    TGuiQtApplication();
    virtual ~TGuiQtApplication();

    virtual bool init(int argc, char *argv[]);
    virtual int run();

private:
    QApplication*   m_application;
};

#endif // TGUIQTAPPLICATION_H
