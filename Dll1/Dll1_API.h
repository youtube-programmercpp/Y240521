#pragma once
#ifdef DLL1_EXPORTS
//Dll1をコンパイルするとき
#	define	Dll1_API	__declspec(dllexport)
#else
//Dll1ではないプロジェクトをコンパイルするとき
#	define	Dll1_API	__declspec(dllimport)
#endif
