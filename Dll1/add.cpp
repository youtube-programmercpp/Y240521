#include "pch.h"
#include "add.h"
int __declspec(dllexport) Dll1::add(int lhs, int rhs)
{
	return lhs + rhs;
}
