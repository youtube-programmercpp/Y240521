#pragma once
#ifdef DLL2_EXPORTS
#	define	Dll2_API	__declspec(dllexport)
#else
#	define	Dll2_API	__declspec(dllimport)
#endif
