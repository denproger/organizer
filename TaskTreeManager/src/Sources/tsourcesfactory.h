#ifndef TSOURCESFACTORY_H
#define TSOURCESFACTORY_H

#include <map>
#include <ttypes.h>
#include <turl.h>

class TAbstractSource;
class TSourcesFactory
{
public:
    TSourcesFactory();
    ~TSourcesFactory();

    bool init();
    TAbstractSource* getSource(TString alias);
    bool realese();

protected:
    bool addSource(TAbstractSource* source);

protected:
    typedef std::map< TString, TAbstractSource* >       TSourcesMap;
    typedef TSourcesMap::iterator                       iterator;
private:
    TSourcesMap         m_sources;
};

#endif // TSOURCESFACTORY_H
