#pragma once
#include "soldier.h"

class Infantry :public Soldier
{
public:
	void attack();
	string m_strName;
};