#include "CloseCombatCondition.h"

CloseCombatCondition::CloseCombatCondition(const bool within_combat_range)
{
	setIsWithinCombatRange(within_combat_range);
	name = "Close Combat Range Condition";
}

CloseCombatCondition::~CloseCombatCondition()
= default;

void CloseCombatCondition::setIsWithinCombatRange(const bool state)
{
	m_isWithinCombatRange = state;
	data = state;
}

bool CloseCombatCondition::Condition()
{
	return m_isWithinCombatRange;
}
