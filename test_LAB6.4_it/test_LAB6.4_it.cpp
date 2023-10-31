#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6.3_it/LAB6.3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testLAB64it
{
	TEST_CLASS(testLAB64it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 2, 5, 1, 9, 2 };
			int t = arr_sum(a, 5);
			Assert::AreEqual(t, 19);
		}
	};
}
