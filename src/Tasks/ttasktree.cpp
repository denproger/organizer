#include "ttasktree.h"
#include <ttasknode.h>

TTaskTree::TTaskTree(TId id):
    m_id(id), m_root(NULL)
{}

TTaskTree::~TTaskTree() {

}

TTaskNode *TTaskTree::createTaskNode()
{
    TTaskNode * node = new TTaskNode( generateId(), this );
    return node;
}

TTaskNode *TTaskTree::find(TId id)
{
    (void)(id);
    return NULL;
}

TId TTaskTree::generateId()
{
    return 1; //temp value
}

