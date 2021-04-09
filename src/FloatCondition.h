#pragma once
#ifndef __FLOAT_CONDITION__
#define __FLOAT_CONDITION__
#include "Condition.h"

class FloatCondition : public Condition
{
public:
	FloatCondition(float min_value = 0.0f, float max_value = 1.0f);
	~FloatCondition();

	void setTestValue(float value);

	bool Test() override;
private:
	float m_minValue;
	float m_maxValue;
	float m_testValue;
};

#endif /* defined (__FLOAT_CONDITION__) */