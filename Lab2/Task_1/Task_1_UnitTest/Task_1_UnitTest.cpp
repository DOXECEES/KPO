
#include "pch.h"
#include "CppUnitTest.h"
#include "../KPO/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1UnitTest
{
	TEST_CLASS(Task1UnitTest)
	{
	public:	
		TEST_METHOD(TestMethod1)
		{
			std::vector<std::string> answer = { "0b1101","0b111","0b1","0b0000" };
			std::vector<std::string> vec = { "0b1101" ,"0b0000" ,"0b111","0b1" };
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
		TEST_METHOD(TestMethod2)
		{
			std::vector<std::string> answer = { "0b111","0b000" };
			std::vector<std::string> vec = { "0b111","0b000" };
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
		TEST_METHOD(TestMethod3)
		{
			std::vector<std::string> answer = { "0b1111","0b111","0b11","0b1","0b0000"};
			std::vector<std::string> vec = { "0b0000","0b11" ,"0b1111" ,"0b111","0b1"};
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
		TEST_METHOD(TestMethod4)
		{
			std::vector<std::string> answer = { "0b111111","0b11111","0b1111","0b111" };
			std::vector<std::string> vec = { "0b111" ,"0b1111" ,"0b111111","0b11111" };
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
		TEST_METHOD(TestMethod5)
		{
			
			std::vector<std::string> answer = { "0b1010", "0b101", "0b1" };
			std::vector<std::string> vec = { "0b1","0b101","0b1010" };
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
	};
	
}
