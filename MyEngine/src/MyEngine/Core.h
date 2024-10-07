#pragma once

#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MYENGINE_API __declspec(dllexport)
	#else	
		#define	MYENGINE_API __declspec(dllimport)
	#endif 
#else
	#error My engine is only for windows!
#endif