#pragma once
#include "Flyable.h"
using namespace std;

class Bird:public Flyable
{
public:
	virtual void takeoff();
	virtual void land();
	void foraging();
};