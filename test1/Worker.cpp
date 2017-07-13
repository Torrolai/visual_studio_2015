#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker(string name,int age):Person("Worker"+name)
{
	m_iAge = age;
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::carry()
{
	cout << m_strCode << endl;
	cout << "worker--carry()" << endl;
}

void Worker::work()
{
	cout << "work()" << endl;
}