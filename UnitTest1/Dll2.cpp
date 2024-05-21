#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
#include <Dll2/evaluate.h>
#include <stdexcept> //std::runtime_error

namespace Functions
{
	TEST_CLASS(Dll2)
	{
	public:
		TEST_METHOD(test_1)
		{
			Assert::AreEqual(7., ::Dll2::evaluate("1+2*3"));
		}
	};
}
