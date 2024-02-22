#include "pch.h"
#include "CppUnitTest.h"
#include "../1.5/Pair.h"
#include "../1.5/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p(2, 3);
			Assert::AreEqual(2.0, p.getFirst());
			Assert::AreEqual(3.0, p.getSecond());
		}
	};
}
