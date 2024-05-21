#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
#include <Dll1/add.h>
#include <Dll1/div.h>
#include <stdexcept> //std::runtime_error

namespace Functions
{
	TEST_CLASS(Dll1)
	{
	public:
	
		TEST_METHOD(add_success)
		{
			//ここにテストコードを書く
			Assert::AreEqual(3, ::Dll1::add(1, 2));
			Assert::AreEqual(0, ::Dll1::add(-1, +1));
		}
	
		TEST_METHOD(div_failure)
		{
			//ここにテストコードを書く
			Assert::ExpectException<std::runtime_error>([](){
				::Dll1::div(2, 0);
			});
		}
	};
}
