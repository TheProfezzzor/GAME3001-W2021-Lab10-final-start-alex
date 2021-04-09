#pragma once
#ifndef __MOVE_TO_LOS_ACTION__
#define __MOVE_TO_LOS_ACTION__
#include "ActionNode.h"


class MoveToLOSAction : public ActionNode
{
public:
	MoveToLOSAction();
	virtual ~MoveToLOSAction();

	virtual void Action() override;
private:

};

#endif /* defined (__MOVE_TO_LOS_ACTION__) */