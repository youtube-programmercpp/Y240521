#include "pch.h"
#include "div.h"
#include <stdexcept>
int __declspec(dllexport) Dll1::div(int lhs, int rhs)
{
	if (rhs == 0)
		throw std::runtime_error("0で割ろうとしました。");
	else
		return lhs / rhs;
}
