#include <stdio.h>
#include <stdlib.h>
#include "Soldier.h"
#include "Infantry.h"
using namespace std;
int main(void)
{
	
	//Person person;	
	//person.eat();
	//Soldier soldier;
	//soldier.work();
	
	//Infantry infantry;
	//infantry.attack();
	//Soldier s1;


	Person *p1 = new Soldier;
	p1->play();
	delete p1;
	system("pause");
	return 0;
}