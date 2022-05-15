#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_5.1(d)/Fraction.cpp"
#include "../oop_laba_5.1(d)/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest51
{
	TEST_CLASS(oopUnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(4, 6), b(1, 2);
			Fraction c = a - b;
			Assert::AreEqual(c.get_a(), 3);
			Assert::AreEqual(c.get_b(), 4);

		}
	};
}
