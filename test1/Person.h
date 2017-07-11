#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	virtual ~Person();
	void play();
protected:
	string m_strName;
//private:
//	int m_iAge;
};