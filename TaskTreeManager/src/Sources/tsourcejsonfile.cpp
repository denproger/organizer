#include "tsourcejsonfile.h"

TSourceJsonFile::TSourceJsonFile():
    TAbstractSource("json-file")
{}

TSourceJsonFile::~TSourceJsonFile()
{}

bool TSourceJsonFile::init()
{
    return true;
}

bool TSourceJsonFile::importTree(const TUrl &url, TTaskTree &tree)
{
    if( url.getScheme() == getAlias() )
    {
        if( !(isInitialized()) )
        {
            if( !(init()) )
                return false;
        }

        //
        (void)(tree);
        return false;
    }
    return false;
}

bool TSourceJsonFile::exportTree(const TUrl &url, const TTaskTree &tree)
{
    if( url.getScheme() == getAlias() )
    {
        if( !(isInitialized()) )
        {
            if( !(init()) )
                return false;
        }
        //
        (void)(tree);
        return false;
    }
    return false;
}

bool TSourceJsonFile::release()
{
    return true;
}

