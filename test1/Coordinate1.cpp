#include "Coordinate1.h"

coordinate1::coordinate1(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

int coordinate1::getX()
{
	return m_iX;
}

int coordinate1::getY()
{
	return m_iY;
}

coordinate1 &operator - (coordinate1 &c)
{
	c.m_iX = -c.m_iX;
	c.m_iY = -c.m_iY;
	return c;
}

coordinate1 &coordinate1::operator ++()
{
	m_iX++;
	m_iY++;
	return *this;
}

coordinate1 coordinate1::operator ++(int)
{
	coordinate1 old(*this);
	this->m_iX++;
	this->m_iY++;
	return old;
}

//coordinate1 &coordinate1::operator - ()
//{
//	this->m_iX = -(this->m_iX);
//	m_iY = -m_iY;
//	return *this;
//}
