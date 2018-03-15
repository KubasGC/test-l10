// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <iostream>

class API
{
public:
	static API * instance;
	static void Set(API * api) { instance = api; };
	static API& Get() { return *instance; };

	virtual void setInfo(std::string text) = 0;
};



// TODO: reference additional headers your program requires here
