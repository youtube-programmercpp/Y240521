#include "pch.h"
#include "div.h"
#include <stdexcept>
int __declspec(dllexport) Dll1::div(int lhs, int rhs)
{
	if (rhs == 0)
		throw std::runtime_error("0�Ŋ��낤�Ƃ��܂����B");
	else
		return lhs / rhs;
}
