// Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.cources.programming.cpp/Tyuiu.cources.programming.cpp.cpp"

int Add(int a, int b)
{
	return a + b;
}

class ServiceClass : public ISprint0Task2V0, public ISprint0Task3V1
{
public:
	int Add(int a, int b) override
	{
		return a + b;
	}

	string Reverse(string message) override
	{
		size_t len = message.length();
		string result = message;
		
		for (size_t i = 0; i < len; i++)
		{
			result[len -1 - i] = message[i];
		}
		return result;
	}
};
