#include "Circle.h"

Circle::Circle(int R)
{
	cout << "Circle()" << endl;
	m_dR = R;
	m_pCenter = new Coordinate(3, 5);
}

Circle::~Circle()
{
	cout << "~Circle()" << endl;
	delete m_pCenter;
	m_pCenter = NULL;
}

void Circle::print_C()
{
	cout << "print_C()" << endl;
}

double Circle::calArea()
{
	cout << "Circle's area is " <<  endl;
	return 3.14*m_dR*m_dR;
}
