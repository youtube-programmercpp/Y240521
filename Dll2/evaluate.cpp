#include "pch.h"
#include "evaluate.h"
#include <ctype.h>
void skip_spaces(_Inout_ const char*& s)
{
	for (;;) {
		if (isspace((unsigned char)*s)) {
			++s;
			continue;
		}
		else
			return;
	}
}
void skip_spaces(_Inout_ const wchar_t*& s)
{
	for (;;) {
		if (iswspace(*s)) {
			++s;
			continue;
		}
		else
			return;
	}
}
#include <stdexcept>
template<class CharType>double add(const CharType*& s);

double strtod_template_function(const char* s, char** end)
{
	return strtod(s, end);
}
double strtod_template_function(const wchar_t* s, wchar_t** end)
{
	return wcstod(s, end);
}
template<class CharType>double primary(const CharType*& s)
{
	if (*s == '(') {
		skip_spaces(++s);
		const auto value = add(s);
		if (*s == ')') {
			skip_spaces(++s);
			return value;
		}
		else
			throw std::runtime_error("閉じ括弧がありませんでした。");
	}
	else {
		CharType* end;
		const auto value = strtod_template_function(s, &end);
		if (s == end)
			throw std::runtime_error("定数が記述されていません。");
		else {
			skip_spaces(s = end);
			return value;
		}
	}
}
template<class CharType>double mul(const CharType*& s)
{
	for (auto value = primary(s);;) {
		switch (*s) {
		case '*': skip_spaces(++s); value *= primary(s); continue;
		case '/': skip_spaces(++s); value /= primary(s); continue;
		default:
			return value;
		}
	}
}
template<class CharType>double add(const CharType*& s)
{
	for (auto value = mul(s);;) {
		switch (*s) {
		case '+': skip_spaces(++s); value += mul(s); continue;
		case '-': skip_spaces(++s); value -= mul(s); continue;
		default:
			return value;
		}
	}
}
double Dll2_API Dll2::evaluate(_In_ const char* s)
{
	skip_spaces(s);
	return add(s);
}
double Dll2_API Dll2::evaluate(_In_ const wchar_t* s)
{
	skip_spaces(s);
	return add(s);
}
