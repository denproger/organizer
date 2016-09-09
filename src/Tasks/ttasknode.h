#ifndef TTASKNODE_H
#define TTASKNODE_H

#include <ttypes.h>
#include <vector>
#include <ttaskproperty.h>


class TTaskTree;
class TTaskNode
{
public:
    typedef std::vector<TTaskNode*>     TChildrenList;

public:
    TTaskNode(TId id, TTaskTree* tree );
    ~TTaskNode();

    TId getId() const { return m_id; }

    TString getName() const { return m_name; }
    void setName(const TString& name ) { m_name = name; }
    TString getDescription() const { return m_description; }
    void setDescription(const TString& description ) { m_description = description; }

    TTaskProperty& property() { return m_property; }

    void addChildren(TTaskTree* task);
    void removeChildren(TId id);
    TTaskNode* find(const TId id);

    bool cutFromRoot();
    bool cutFromTree();
    bool deleteChildrens();

private:
    TId             m_id;
    TString         m_name;
    TString         m_description;
    TTaskProperty   m_property;
    TTaskNode*      m_parent;
    TChildrenList   m_children;
    TTaskTree*      m_tree;
};

#endif // TTASKNODE_H
