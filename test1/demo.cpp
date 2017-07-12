#include <stdio.h>
#include <stdlib.h>
#include "MingrantWorker.h"
using namespace std;
int main(void)
{
	MigrantWorker *p=new MigrantWorker("LANCER", "007", "PINK");
	//MigrantWorker M1("LANCER", "PINK", "007");
	//M1.carry();
	p->Farmer::printColor();
	p->Worker::printColor();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}
