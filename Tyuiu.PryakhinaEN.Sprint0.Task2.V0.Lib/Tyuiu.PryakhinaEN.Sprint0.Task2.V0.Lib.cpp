// Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
int Add(int a, int b)
{
	return a + b;
}

class ISprint0Task2V0
{
public:
	virtual int Add(int a, int b) = 0;
};

class ServiceClass : public ISprint0Task2V0
{
public:
	ServiceClass() { }
	int Add(int a, int b) {
		return a + b;
	}
};
