#pragma once
#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
using namespace std;

class Shape
{
public:
	virtual double calArea();
	Shape();
	virtual ~Shape();//�����������������ڴ�й¶
};

#endif // !SHAPE_H