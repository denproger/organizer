#ifndef TTASKTREE_H
#define TTASKTREE_H

#include <ttypes.h>

class TTaskNode;
class TTaskTree
{
public:
    TTaskTree(TId id);
    ~TTaskTree();

    TId getId() const { return m_id; }
    TString getAlias() const { return m_alias; }

    TString getName() const { return m_name; }
    void setName(const TString& name) { m_name = name; }

    TString getDescription() const { return m_description; }
    void setDescription(const TString& description) { m_description = description; }

    void setRoot(TTaskNode* m_root);
    TTaskNode* getRoot() const { return m_root; }

    TTaskNode *createTaskNode();
    TTaskNode *find(TId id);

protected:
    TId generateId();

private:
    TId             m_id;           ///< Identificator of task tree
    TString         m_alias;        ///< The alias of tree, it is used like text id
    TString         m_name;         ///< The name of tree, it is displayd for user
    TString         m_description;  ///< The description of tree, it is displayed for user
    TTaskNode*      m_root;         ///< The root of tree;
};

#endif // TTASKTREE_H
