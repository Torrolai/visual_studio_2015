#pragma once 
//���麯���ӿ���û��ʵ�ֺ��������Ծ�û��cpp�ļ�
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