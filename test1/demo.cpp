#include <stdio.h>
#include <stdlib.h>
#include "Bird.h"
#include "Plane.h"
#include "FighterPlane.h" 
#include "IndexException.h"
#include "Time.h"
#include "Match.h"
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
	Time t(6, 35, 34);
	//printTime(t);
	Match m;
	m.printTime(t);;
	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	cout << t.m_iHour << ":" << t.m_iMin << ":" << t.m_iSec << endl;
//}
