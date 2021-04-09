#include "State.h"
#include "Transition.h"

State::State()
= default;

State::~State()
= default;

std::vector<Transition*> State::getTransitions()
{
	return m_transitions;
}

Action* State::getAction()
{
	return m_action;
}

void State::addTransition(Transition* transition)
{
	m_transitions.push_back(transition);
}

void State::setAction(Action* action)
{
	m_action = action;
}
