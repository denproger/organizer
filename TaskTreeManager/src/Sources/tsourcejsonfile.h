#ifndef TSOURCEJSONFILE_H
#define TSOURCEJSONFILE_H

#include <tabstractsource.h>

class TSourceJsonFile : public TAbstractSource
{
public:
    TSourceJsonFile();
    ~TSourceJsonFile();

    virtual bool init() final;
    virtual bool importTree(const TUrl& url, TTaskTree& tree) final;
    virtual bool exportTree(const TUrl& url, const TTaskTree& tree ) final;
    virtual bool release() final;
};

#endif // TSOURCEJSONFILE_H
