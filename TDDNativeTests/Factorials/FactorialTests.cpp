#include "Factorials.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TDDNativeTests
{
	TEST_CLASS(Factorial_Tests)
	{
	public:

		TEST_METHOD(Calculation)
		{
			Factorials factorial;
			Assert::AreEqual(1, factorial.Calculate(1));
			Assert::AreEqual(2, factorial.Calculate(2));
			Assert::AreEqual(6, factorial.Calculate(3));
			Assert::AreEqual(3628800, factorial.Calculate(10));

		}
	};
}



