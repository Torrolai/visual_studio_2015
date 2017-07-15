#pragma once
#ifndef Plane_H
#define Plane_H
#include "Flyable.h"

class Plane :public Flyable
{
public:
	virtual void takeoff();
	virtual void land();
	void printCode();
	void carry();

protected:
	string m_strCode;
};

#endif // !Plane_H

