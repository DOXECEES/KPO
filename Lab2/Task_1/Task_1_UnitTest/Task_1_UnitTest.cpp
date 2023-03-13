
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
			std::vector<std::string> answer = { "0b1101","0b0111","0b001","0b0000" };
			std::vector<std::string> vec = { "0b1101" ,"0b0000" ,"0b0111","0b001" };
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
			std::vector<std::string> answer = { "0b1111","0b0111","0b0011","0b0001","0b0000"};
			std::vector<std::string> vec = { "0b0000","0b0011" ,"0b1111" ,"0b0111","0b0001"};
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
			
			std::vector<std::string> answer = { "0b1010", "0b0101", "0b0001" };
			std::vector<std::string> vec = { "0b0001","0b0101","0b1010" };
			sort(vec);
			Assert::IsTrue(answer == vec);
		}
	};
	TEST_CLASS(TestBinToDec)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(7, BinToDec("0b0111"));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(128, BinToDec("0b10000000"));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(1023, BinToDec("0b1111111111"));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(0, BinToDec("0b00000"));
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(341, BinToDec("0b101010101"));
		}


	};

}
