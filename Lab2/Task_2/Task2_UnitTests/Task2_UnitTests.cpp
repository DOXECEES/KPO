#include "pch.h"
#include "CppUnitTest.h"
#include"../Task_2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task2UnitTests
{
	TEST_CLASS(FibonachiTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(static_cast<uint64_t>(233), FindFibonachi(13));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(static_cast<uint64_t>(1), FindFibonachi(1));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(static_cast<uint64_t>(0), FindFibonachi(0));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(static_cast<uint64_t>(5), FindFibonachi(5));
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(static_cast<uint64_t>(55), FindFibonachi(10));
		}
	};
	TEST_CLASS(FibonachiBuRecurtionTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(static_cast<uint64_t>(233), FindFibonachiByRecurtion(13));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(static_cast<uint64_t>(1), FindFibonachiByRecurtion(1));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(static_cast<uint64_t>(0), FindFibonachiByRecurtion(0));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(static_cast<uint64_t>(5), FindFibonachiByRecurtion(5));
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(static_cast<uint64_t>(55), FindFibonachiByRecurtion(10));
		}
	};
}
