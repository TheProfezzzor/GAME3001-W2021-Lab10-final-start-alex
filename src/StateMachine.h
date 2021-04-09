#pragma once
#ifndef __STATE_MACHINE__
#define __STATE_MACHINE__
#include "State.h"

class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	// getters
	State* getCurrentState() const;

	//setters
	void setCurrentState(State* current_state);

	void Update();
private:
	State* m_currentState{};
};

#endif /* defined (__STATE_MACHINE__) */