#pragma once
#ifndef __CONDITION__
#define __CONDITION__
class Condition
{
public:
	Condition(bool condition = false);
	~Condition();

	virtual bool Test();
	void SetCondition(bool condition);
private:
	bool m_condition{};
};
#endif /* defined (__CONDITION__)*/