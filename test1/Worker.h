#pragma once
#include"Person.h"

class Worker :virtual public Person
{
public:
	Worker(string name,int code);
	virtual ~Worker();
	void carry();
	virtual void work();
	//int m_iSalary;

protected:
	string m_strCode;
	int m_iAge;
};