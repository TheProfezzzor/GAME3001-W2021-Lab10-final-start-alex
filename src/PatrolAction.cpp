#include "PatrolAction.h"
#include <iostream>

PatrolAction::PatrolAction()
{
	name = "Patrol Action";
}

PatrolAction::~PatrolAction()
= default;

void PatrolAction::Action()
{
	std::cout << "Performing Patrol Action" << std::endl;
}
