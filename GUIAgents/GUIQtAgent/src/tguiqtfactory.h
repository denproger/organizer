#ifndef TGUIQTFACTORY_H
#define TGUIQTFACTORY_H

#include <iguifactory.h>

class TGuiQtFactory : public IGuiFactory
{
public:
    virtual IGuiApplication* getGuiApplication() const final;
    virtual IGuiAgent* getGuiAgent() const final;
};

#endif // tGUIQTFACTORY_H
