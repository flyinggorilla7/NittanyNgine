#pragma once

#ifdef NN_PLATFORM_WINDOWS
	#ifdef NN_BUILD_DLL
		#define NN_API _declspec(dllexport)
	#else
		#define NN_API _declspec(dllimport)
	#endif
#else
	#error NN only supports Windows.
#endif