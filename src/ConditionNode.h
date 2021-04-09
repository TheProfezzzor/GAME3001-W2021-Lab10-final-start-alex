#pragma once
#ifndef __CONDITION_NODE__
#define __CONDITION_NODE__
#include "TreeNode.h"

// Interface
class ConditionNode : public TreeNode
{
public:
	ConditionNode() { isLeaf = false; }
	virtual ~ConditionNode() = default;

	virtual bool Condition() = 0;
};

#endif /* defined (__CONDITION_NODE__) */
