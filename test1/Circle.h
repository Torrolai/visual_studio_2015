#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Coordinate.h"
class Circle :public Shape
{
public:
	Circle(double R = 3);
	virtual ~Circle();
	virtual double calArea();
	void print_C();
protected:
	double m_dR;
	Coordinate *m_pCenter;
};

#endif // !CIRCLE_H