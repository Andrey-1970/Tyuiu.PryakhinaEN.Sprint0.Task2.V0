#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib/Tyuiu.PryakhinaEN.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuPryakhinaENSprint0Task2V0Test
{
	TEST_CLASS(TyuiuPryakhinaENSprint0Task2V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init

			// Run

			// Valid
			Assert::ExpectException<std::exception>([]() {
				throw std::exception();
			});
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(AddValid) 
		{
			int a = 2;
			int b = 4;
			
			int c = Add(a, b);

			Assert::AreEqual(6, c);
		}
		TEST_METHOD(ServiceAddValid)
		{
			int a = 2;
			int b = 4;

			ISprint0Task2V0* service = new ServiceClass();

			Assert::AreEqual(6, service->Add(a, b));
		}
	};
}
