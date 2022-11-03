#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2kab/5.2kab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			g = A(1, 2, 4);
			Assert::AreEqual(g, 0, 2);
		}
	};
}
