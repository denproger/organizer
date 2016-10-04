#include "ttasktreemanager.h"
#include <ttasktree.h>

TTaskTreeManager::TTaskTreeManager()
{

}

TTaskTreeManager::~TTaskTreeManager()
{

}

bool TTaskTreeManager::init()
{
    if( !(createSourcesFactory()) )
        return false;

    return true;
}

TTaskTree *TTaskTreeManager::createTaskTree()
{
    return new TTaskTree(generateId());
}

bool TTaskTreeManager::importTaskTree(const TUrl &uml, TTaskTree &tree)
{
    (void)(uml);
    (void)(tree);

    return false;
}

bool TTaskTreeManager::exportTaskTree(const TUrl &uml, TTaskTree &tree)
{
    (void)(uml);
    (void)(tree);

    return false;
}

bool TTaskTreeManager::release()
{
    return true;
}

bool TTaskTreeManager::createSourcesFactory()
{
    return m_sourceFactory.init();
}

TId TTaskTreeManager::generateId()
{
    return 1;
}

