#pragma once
#ifndef  COORDINATE_H
#define COORDINAET_H
class Coordinate
{
public:
	Coordinate(int x, int y);
	virtual ~Coordinate();
private:
	int m_iX;
	int m_iY;
};
#endif // ! COORDINATE_H
