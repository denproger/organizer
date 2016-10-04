#include "ttasknode.h"
#include <ttasktree.h>

TTaskNode::TTaskNode(TId id, TTaskTree *tree) :
    m_id(id), m_parent(NULL), m_tree(tree)
{}

TTaskNode::~TTaskNode()
{
    deleteChildrens();
    ;
}

void TTaskNode::addChildren(TTaskTree *task)
{
    (void)(task);
}

void TTaskNode::removeChildren(TId id)
{
    (void)(id);
}

TTaskNode *TTaskNode::find(const TId id)
{
    (void)(id);
    return NULL;
}

bool TTaskNode::cutFromRoot()
{
    return false;
}

bool TTaskNode::cutFromTree()
{
    return false;
}

bool TTaskNode::deleteChildrens()
{
    return false;
}


