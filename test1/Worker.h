#pragma once
#include"Person.h"

class Worker :virtual public Person
{
public:
	Worker(string code = "001", string color = "blue");
	virtual ~Worker();
	void carry();
	//int m_iSalary;
protected:
	string m_strCode;
};