#ifndef IGUIFACTORY_H
#define IGUIFACTORY_H

#include <iguiapplication.h>
#include <iguiagent.h>

class IGuiFactory
{
public:
    virtual IGuiApplication* getGuiApplication() const = 0;
    virtual IGuiAgent* getGuiAgent() const = 0;
};

#endif // IGUIFACTORY_H
