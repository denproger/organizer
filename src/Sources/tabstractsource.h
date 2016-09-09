#ifndef TABSTRACTSOURCE_H
#define TABSTRACTSOURCE_H

#include <ttypes.h>
#include <turl.h>

class TTaskTree;
class TAbstractSource
{
public:
    TAbstractSource(TString alias);
    virtual ~TAbstractSource();

    virtual bool init() = 0;
    virtual bool importTree(const TUrl& url, TTaskTree& tree) = 0;
    virtual bool exportTree(const TUrl& url, const TTaskTree& tree ) = 0;
    virtual bool release() = 0;

    TString getAlias() const { return m_alias; }
    bool importTree(const TString& url, TTaskTree& tree);
    bool importTree(const char* url, TTaskTree &tree);
    bool exportTree(const TString& url, const TTaskTree& tree);
    bool exportTree(const char* url, const TTaskTree &tree);

protected:
    bool isInitialized() const { return m_initialized; }
    void setInitialized(const bool initialized) { m_initialized = initialized; }

private:
    TString     m_alias;
    bool        m_initialized;
};

#endif // TABSTRACTSOURCE_H
