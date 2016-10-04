#ifndef IPLUGIN_H
#define IPLUGIN_H

class IPlugin
{
public:
    IPlugin();

    virtual const char* getName() = 0;
    virtual const char* getDescription() = 0;

    virtual bool init(void** args) = 0;
    virtual bool update() = 0;
};

#endif // IPLUGIN_H
