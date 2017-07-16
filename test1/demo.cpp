#include <stdio.h>
#include <stdlib.h>
#include "Bird.h"
#include "Plane.h"
#include "FighterPlane.h" 
#include "IndexException.h"
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

int main(void)
{
	//MigrantWorker *p=new MigrantWorker("LANCER", "007", "PINK");
	//MigrantWorker M1("LANCER", "PINK", "007");
	//M1.carry();
	//p->Farmer::printColor();
	//p->Worker::printColor();
	//delete p;
	//p = NULL;
	//Circle *C = new Circle(5);
	//C->calArea();
	/*
	Shape *s1 = new Rect(3, 6);
	Shape *s2 = new Circle(5);
	Circle *c1 = new Circle(6);
	c1->print_C;
	s1->calArea();
	s2->calArea();
	delete s1;
	delete s2;
	s1 = NULL;
	s2 = NULL;
	
	Shape S1;
	Circle C1;
	C1.calArea();
	*/
	try
	{
		test();
	}
	catch (IndexException &e)
	{
		e.printException();
	}

	system("pause");
	return 0;
}
