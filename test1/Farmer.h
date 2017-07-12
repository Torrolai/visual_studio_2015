#pragma once
#include "Person.h"

class Farmer :virtual public Person
{
public:
	Farmer(string name="lancer", string color="yellow");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;

};