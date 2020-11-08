#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double a = 1;
			const double b = 1;
			t = g(a, b);
			Assert::AreEqual(t, 3.);

		}
	};
}
