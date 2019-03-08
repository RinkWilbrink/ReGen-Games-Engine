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

#ifdef RG_DEBUG
	#define RG_ENABLE_ASSERT
#endif

#ifdef RG_ENABLE_ASSERT
	#define RG_ASSERT(x, ...) { if(!(x)) { RG_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();} }
	#define RG_CORE_ASSERT(x, ...) { if(!(x)) { DEBUG_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define RG_ASSERT(x, ...)
	#define RG_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)