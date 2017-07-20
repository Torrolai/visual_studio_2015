#include "Tank.h"
using namespace std;

int Tank::s_iCount = 0;

Tank::Tank(string code)
{
	m_sCode = code;
	s_iCount++;
	cout << "tank" << endl;
}

Tank::~Tank()
{
	s_iCount--;
	cout << "~tank()" << endl;
}

void Tank::fire()
{
	cout << "tank--fire()" << endl;
}

int Tank::getCount()
{
	//cout << "tank's number is " << s_iCount << endl;
	
	return s_iCount;
}
