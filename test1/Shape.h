#pragma once
#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
using namespace std;

class Shape
{
public:	
	Shape();
	virtual ~Shape();//ĞéÎö¹¹º¯Êı£¬±ÜÃâÄÚ´æĞ¹Â¶
	virtual double calArea();
};

#endif // !SHAPE_H