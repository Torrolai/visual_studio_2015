#pragma once
#ifndef Plane_H
#define Plane_H
#include "Flyable.h"

class Plane :public Flyable
{
public:
	Plane(string code);
	virtual void takeoff();
	virtual void land();
	void printCode();
protected:
	string m_strCode;
};

#endif // !Plane_H

