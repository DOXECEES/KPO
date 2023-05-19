#include "pch.h"
#include "CppUnitTest.h"
#include "../Test/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const auto [max, min, devider] = FindDevider(1, 20);
			Assert::AreEqual(20, max);
			Assert::AreEqual(12, min);
			Assert::AreEqual(6, devider);
		}
	};
}
