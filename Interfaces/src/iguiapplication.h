#ifndef IGUIAPPLICATION_H
#define IGUIAPPLICATION_H

class IGuiApplication
{
public:
    IGuiApplication();
    virtual ~IGuiApplication();

    virtual bool init(int argc, char *argv[]) = 0;
    virtual int run() = 0;
};

#endif // IGUIAPPLICATION_H
