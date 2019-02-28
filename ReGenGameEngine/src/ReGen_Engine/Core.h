#pragma once

#ifdef RG_PLATFORM_WINDOWS
	#ifdef RG_BUILD_DLL
		#define REGEN_API __declspec(dllexport)
	#else
		#define REGEN_API __declspec(dllimport)
	#endif // RG_BUILD_DLL
#else
	#error ReGen only supports Windows!!!
#endif // RG_PLATFORM_WINDOWS

#define BIT(x) (1 << x)