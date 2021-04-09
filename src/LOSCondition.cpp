#include "LOSCondition.h"

LOSCondition::LOSCondition(const bool LOS)
{
	setLOS(LOS);
	name = "LOS Condition";
}

LOSCondition::~LOSCondition()
= default;

void LOSCondition::setLOS(const bool state)
{
	m_hasLOS = state;
	data = state;
}

bool LOSCondition::Condition()
{
	return m_hasLOS;
}
