#pragma once
#ifndef EXCEPTON_H
#define EXCEPTON_H
using namespace std;

class Exception
{
public:
	virtual void printException();
	virtual ~Exception(){};
}; 
#endif // !EXCEPTON_H
