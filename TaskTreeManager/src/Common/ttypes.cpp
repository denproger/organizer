#include <ttypes.h>

const char* getBytes(const TString &str)
{
    #if defined(USE_QT)
        return str.toStdString().c_str();
    #else
        return str.c_str();
    #endif
}
