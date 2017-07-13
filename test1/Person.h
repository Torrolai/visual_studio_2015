#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
	Person(string name);
	virtual ~Person();
	void printColor();
	virtual void work() = 0;
protected:
	string m_strColor;
	string m_strName;
//private:
//	int m_iAge;
};
#endif // !1