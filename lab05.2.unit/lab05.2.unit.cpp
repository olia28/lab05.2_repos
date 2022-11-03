#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.2(Double)/lab05.2(Double).cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab052unit
{
	TEST_CLASS(lab052unit)
	{
	public:
		
		TEST_METHOD(TestS)
		{
			int n = 0;

			double k = atanh(0.5),
				l = S(0.5, 0.001, n);
			
			Assert::AreEqual(k, l, 0.001);
		}
	};
}
