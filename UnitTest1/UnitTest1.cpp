#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 5.1B/Point.h"
#include "../OOP 5.1B/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point x(1, 1);
			double test = x.Angle();
			Assert::AreEqual(45., test);
		}
	};
}
