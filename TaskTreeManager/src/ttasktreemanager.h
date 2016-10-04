#ifndef TTASKTREEMANAGER_H
#define TTASKTREEMANAGER_H

#include <ttypes.h>
#include <turl.h>
#include <tsourcesfactory.h>

class TTaskTree;
class TTaskTreeManager
{
public:
    TTaskTreeManager();
    ~TTaskTreeManager();

    bool init();
    TTaskTree* createTaskTree();

    bool importTaskTree(const TUrl& uml, TTaskTree& tree);
    bool exportTaskTree(const TUrl& uml, TTaskTree& tree);

    bool release();

protected:
    bool createSourcesFactory();
    TId generateId();

protected:
    typedef std::map<TId, TTaskTree* >      TTaskTreeList;
private:
    TSourcesFactory     m_sourceFactory;
    TTaskTreeList       m_taskTrees;
};

#endif // TTASKTREEMANAGER_H
