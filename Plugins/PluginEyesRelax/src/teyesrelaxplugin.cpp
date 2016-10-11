#include "teyesrelaxplugin.h"

TEyesReaxPlugin::TEyesReaxPlugin(): IPlugin()
{
}

TEyesReaxPlugin::~TEyesReaxPlugin()
{}

bool TEyesReaxPlugin::init(TTaskTreeManager *taskManager)
{
    if( !(IPlugin::init(taskManager)) )
        return false;

    return true;
}

bool TEyesReaxPlugin::update()
{
    return true;
}


