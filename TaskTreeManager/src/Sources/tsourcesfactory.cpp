#include "tsourcesfactory.h"
#include <tabstractsource.h>
#include <tsourcejsonfile.h>


TSourcesFactory::TSourcesFactory()
{}

TSourcesFactory::~TSourcesFactory()
{
    realese();
}

bool TSourcesFactory::init()
{
    if( !(addSource(new TSourceJsonFile())) )
        return false;

    return true;
}

bool TSourcesFactory::realese()
{
    for(iterator it = m_sources.begin(); it != m_sources.end(); ++it) {

        TAbstractSource* source = it->second;
        if( source ) {
            source->release();
            delete source;
        }
    }
    return true;
}

bool TSourcesFactory::addSource(TAbstractSource *source)
{
    if( source != NULL ) {

        iterator it = m_sources.find(source->getAlias());
        if( it != m_sources.end() ) {
            m_sources[source->getAlias()] = source;
        }
        else {
            it->second = source;
        }
    }
    return false;
}


