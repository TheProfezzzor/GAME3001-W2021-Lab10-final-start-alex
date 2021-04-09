#pragma once
#ifndef __TRANSITION__
#define __TRANSITION__
#include "Condition.h"
#include "State.h"

class Transition
{
public:
	Transition(Condition* condition = nullptr, State* target_state = nullptr);
	~Transition();

	// getters
	Condition* getCondition() const;
	State* getTargetState() const;

	// setters
	void setCondition(Condition* condition);
	void setTargetState(State* state);
	
private:
	Condition* m_condition{};
	State* m_targetState{};
};

#endif /* defined (__TRANSITION__) */