#pragma once
#ifndef __DECISION_TREE__
#define __DECISION_TREE__
#include "Agent.h"
#include "CloseCombatCondition.h"
#include "LOSCondition.h"
#include "RadiusCondition.h"
#include "TreeNode.h"
#include "TreeNodeType.h"

class DecisionTree
{
public:
	// constructor and destructor
	DecisionTree();
	~DecisionTree();

	// getters and setters
	Agent* getAgent() const;
	void setAgent(Agent* agent);

	// convenience functions
	TreeNode* AddNode(TreeNode* parent, TreeNode* child_node, TreeNodeType type);
	void Display();
	void Update();
	
	std::string MakeDecision(); // in order traversal

	
private:
	Agent* m_agent;

	LOSCondition* m_LOSNode;
	RadiusCondition* m_RadiusNode;
	CloseCombatCondition* m_CloseCombatNode;

	void m_buildTree();

	std::vector<TreeNode*> m_treeNodeList;
};


#endif /* defined (__DECISION_TREE__) */