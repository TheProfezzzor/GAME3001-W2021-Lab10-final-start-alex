#pragma once
#ifndef __PATROL__
#define __PATROL__
#include "Action.h"


class Patrol : public Action
{
public:
	Patrol();
	virtual ~Patrol();

	virtual void Execute() override;
private:

};

#endif /* defined (__PATROL__) */