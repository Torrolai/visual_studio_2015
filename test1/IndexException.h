#pragma once
#ifndef INDEX_EXCEPTION_H
#include "Exception.h"

class IndexException :public Exception
{
public:
	virtual void printException();
};
#endif // !INDEX_EXCEPTION_H