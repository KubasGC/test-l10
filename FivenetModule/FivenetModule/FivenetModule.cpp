// FivenetModule.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

API* API::instance = nullptr;


__declspec(dllexport) void OnModuleInit(API * inst)
{
	API::Set(inst);
	API::Get().setInfo("DUPA");
	// std::cout << text.c_str() << std::endl;
}
