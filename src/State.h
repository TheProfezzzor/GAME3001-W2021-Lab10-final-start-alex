#pragma once
#ifndef __STATE__
#define __STATE__
#include "Action.h"
#include <vector>

class State
{
public:
	friend class Transition;
	
	State();
	~State();

	// getters
	std::vector<Transition*> getTransitions();
	Action* getAction();

	// setters
	void addTransition(Transition* transition);
	void setAction(Action* action);
	
private:
	std::vector<Transition*> m_transitions;
	Action* m_action;
};

#endif /* defined (__STATE__) */