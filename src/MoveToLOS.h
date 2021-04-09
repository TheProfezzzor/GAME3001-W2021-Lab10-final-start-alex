#pragma once
#ifndef __MOVE_TO_LOS__
#define __MOVE_TO_LOS__
#include "Action.h"


class MoveToLOS : public Action
{
public:
	MoveToLOS();
	virtual ~MoveToLOS();

	virtual void Execute() override;
private:

};

#endif /* defined (__MOVE_TO_LOS__) */