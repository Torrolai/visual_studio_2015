#include <stdio.h>
#include <stdlib.h>
#include "Bird.h"
#include "Plane.h"
#include "FighterPlane.h" 
#include "IndexException.h"
#include "Coordinate1.h"
//#include "Time.h"
//#include "Match.h"
#include "Tank.h"
using namespace std;

void flyMatch(Flyable *f1, Flyable *f2)
{
	f1->takeoff();
	f1->land();
	f2->takeoff();
	f2->land();
}

void doSomething(Flyable *obj)
{
	cout << typeid(*obj).name() << endl;
	obj->takeoff();
	if (typeid(*obj) == typeid(Bird))
	{
		Bird *bird = dynamic_cast<Bird*>(obj);
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane))
	{
		Plane *plane = dynamic_cast<Plane*>(obj);
		plane->carry();
	}
	obj->land();
}

void test()
{
	throw IndexException();
}

//void printTime(Time &t);

int main(void)
{

	coordinate1 coor1(1, 3);
	cout << coor1.getX() << " " << coor1.getY() << endl;
	cout << (coor1++).getX() << endl;
	cout << (coor1++).getY() << endl;
	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	cout << t.m_iHour << ":" << t.m_iMin << ":" << t.m_iSec << endl;
//}
