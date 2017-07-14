#pragma once 
//纯虚函数接口类没有实现函数，所以就没有cpp文件
#ifndef Flyable
#include <string>
#include <iostream>
using namespace std;

class Flyable
{
public:
	virtual void takeoff() = 0;
	virtual void land() = 0;
};

#endif // !Flyable