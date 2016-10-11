#ifndef TEYESRELAX_PLUGIN_H
#define TEYESRELAX_PLUGIN_H

#include <iplugin.h>

class TEyesReaxPlugin: public IPlugin
{
public:
    TEyesReaxPlugin();
    virtual ~TEyesReaxPlugin();

    virtual const char* getName() const { return "EyesRelaxPlugin"; }
    virtual const char* getDescription() const { return "Eyes Relax"; }

    virtual bool init(TTaskTreeManager* taskManager);
    virtual bool update();
};

#endif // TEYESRELAX_PLUGIN_H
