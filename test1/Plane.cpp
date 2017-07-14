#include "Plane.h"
using namespace std;

Plane::Plane(string code)
{
	m_strCode = code;
	cout << "--Plane--" << endl;
}

void Plane::takeoff()
{
	cout << "Plane-->takeoff()" << endl;
}

void Plane::land()
{
	cout << "Plane-->land()" << endl;
}

void Plane::printCode()
{
	cout << "Plnae'code is " << m_strCode << endl;
}

