#include "tguiqtfactory.h"

#include <tguiqtapplication.h>
#include <tguiqtagent.h>

IGuiApplication* TGuiQtFactory::getGuiApplication() const
{
    return new TGuiQtApplication();
}

IGuiAgent *TGuiQtFactory::getGuiAgent() const
{
    return new TGuiQtAgent();
}

