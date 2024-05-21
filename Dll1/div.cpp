#include "pch.h"
#include "div.h"
#include <stdexcept>
int __declspec(dllexport) Dll1::div(int lhs, int rhs)
{
	if (rhs == 0)
		throw std::runtime_error("0Ç≈äÑÇÎÇ§Ç∆ÇµÇ‹ÇµÇΩÅB");
	else
		return lhs / rhs;
}
