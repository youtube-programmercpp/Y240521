#include "pch.h"

#include "ClassLibrary1.h"
#include <vcclr.h>
#include <Dll2/evaluate.h>

double ClassLibrary1::Class1::Evaluate(System::String^ s)
{
    pin_ptr<const wchar_t> p = PtrToStringChars(s);
    return Dll2::evaluate(p);
}
