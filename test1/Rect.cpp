#include "Rect.h"

Rect::Rect(double Width, double Height)
{
	cout << "Rect()" << endl;
	m_dWidth = Width;
	m_dHeight = Height;
}

Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::calArea()
{
	cout << "Rect's area is " << endl;
	return m_dWidth * m_dHeight;
}