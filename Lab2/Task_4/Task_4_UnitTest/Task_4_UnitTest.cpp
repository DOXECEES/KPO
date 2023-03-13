#include "pch.h"
#include "CppUnitTest.h"
#include "../Task4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task4UnitTest
{
	TEST_CLASS(Task4UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<float> vec = { 99.0f,10.f,11.0f,70.23f,50.0f,1.0f,2.23f,90.2f,22.0f,43.12f };
			Assert::AreEqual(false, MultipleOfFour(vec));
		}
		TEST_METHOD(TestMethod2)
		{
			std::vector<float> vec = { 0.0f,0.f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,100.0f,100.0f };
			Assert::AreEqual(true, MultipleOfFour(vec));
		}
		TEST_METHOD(TestMethod3)
		{
			std::vector<float> vec = { 100.0f,32.f,0.0f,220.0f,990.0f,3210.0f,540.0f,3210.0f,6100.0f,0.0f };
			Assert::AreEqual(false, MultipleOfFour(vec));
		}
		TEST_METHOD(TestMethod4)
		{
			std::vector<float> vec = { 12.0f,12.f,15.0f,43.0f,50.24f,50.23f,50.20f,50.54f,50.56f,100.0f };
			Assert::AreEqual(true, MultipleOfFour(vec));
		}
		TEST_METHOD(TestMethod5)
		{
			std::vector<float> vec = { 100.0f,100.f,100.0f,100.0f,100.0f,100.0f,100.0f,100.0f,100.0f,100.0f };
			Assert::AreEqual(false, MultipleOfFour(vec));
		}
	};
}
