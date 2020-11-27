#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1(8)/Lab_8.1(8).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab818
{
	TEST_CLASS(UnitTestLab818)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string lit_r = "SQsdgdgQShhQQQSdhd";
			char para[] = "SQ";
			char para1[] = "QS";
			char zamina[] = "***";

			InsertBefore(lit_r, para, zamina);
			InsertBefore(lit_r, para1, zamina);

			Assert::AreEqual(lit_r[0], '*');
		}
	};
}