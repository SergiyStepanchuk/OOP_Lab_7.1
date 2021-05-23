#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 2, 3, 2, 5, 2 };
			Assert::AreEqual(avg(arr, 5), 2.);
		}
	};
}
