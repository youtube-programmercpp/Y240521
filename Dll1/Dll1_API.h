#pragma once
#ifdef DLL1_EXPORTS
//Dll1���R���p�C������Ƃ�
#	define	Dll1_API	__declspec(dllexport)
#else
//Dll1�ł͂Ȃ��v���W�F�N�g���R���p�C������Ƃ�
#	define	Dll1_API	__declspec(dllimport)
#endif
