#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H
#include <string>
#include <iostream>
using namespace std;

class coordinate1
{
	friend coordinate1 &operator-(coordinate1 &c);
public:
	coordinate1(int x,int y);
	//coordinate1 &operator - ();
	coordinate1 &operator ++();
	coordinate1 operator ++(int);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};
#endif // !COORDINATE_H
