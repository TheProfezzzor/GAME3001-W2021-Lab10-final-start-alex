#pragma once
#ifndef __ATTACK__
#define __ATTACK__
#include "Action.h"

class Attack : public Action
{
public:
	Attack();
	virtual ~Attack();

	virtual void Execute() override;
private:

};

#endif /* defined (__ATTACK__) */
