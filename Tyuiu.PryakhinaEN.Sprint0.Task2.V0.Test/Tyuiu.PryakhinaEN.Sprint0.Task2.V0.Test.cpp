#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib/Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuPryakhinaENSprint0Task2V0Test
{
	TEST_CLASS(TyuiuPryakhinaENSprint0Task2V0Test)
	{
	public:
		
		TEST_METHOD(ExampleFuncTestMethod)
		{
			// Init

			// Run

			// Valid
			Assert::ExpectException<std::exception>([]() {
				throw std::exception();
			});
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(FuncAddValid) 
		{
			// Init
			int a = 2;
			int b = 4;
			
			// Run
			int c = Add(a, b);

			// Valid
			Assert::AreEqual(6, c);
		}
		TEST_METHOD(ServiceClassAddValid)
		{
			// Init
			int a = 2;
			int b = 4;

			// Run
			ISprint0Task2V0* service = new ServiceClass();
			int c = service->Add(a, b);

			// Valid
			Assert::AreEqual(6, c);
		}
		TEST_METHOD(ServiceClassReverseValid)
		{
			// Init
			std::string message = string("12345");

			// Run
			ISprint0Task3V1* service = new ServiceClass();
			std::string c = service->Reverse(message);

			// Valid
			Assert::AreEqual(string("54321"), c);
		}
	};
}
