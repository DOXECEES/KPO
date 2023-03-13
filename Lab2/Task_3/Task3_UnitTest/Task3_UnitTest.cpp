#include "pch.h"
#include "CppUnitTest.h"
#include "../Task_3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task3UnitTest
{
	TEST_CLASS(Task3UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(33, Sum(2));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(0, Sum(0));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(495, Sum(9));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(1505, Sum(10));
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(165, Sum(5));
		}
	};
}
