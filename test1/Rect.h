#pragma once
#include <iostream>
#include "Shape.h"

class Rect :public Shape
{
public:
	Rect(double Width = 4, double Height = 3);
	virtual ~Rect();
	virtual double calArea();

protected:
	double m_dWidth;
	double m_dHeight;
};


