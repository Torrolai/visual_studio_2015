#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name)
{
	m_strName = name;
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::printColor()
{
	cout << "Person->color" << endl;
	cout << m_strColor << endl;
	//m_iAge = 20;
	//cout << "eat()" << endl;
}