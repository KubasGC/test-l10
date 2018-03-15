// ModuleLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <Windows.h>

typedef void(__cdecl *ModuleInit)(API * instance);

API * instance;

int main()
{
	API newApi;
	instance = &newApi;
	HMODULE mod = LoadLibrary(TEXT("modules/Fivenetmodule.dll"));
	if (mod == NULL)
	{
		std::cout << "Nie mozna zaladowac biblioteki!" << std::endl;
	}
	else
	{
		ModuleInit proc = (ModuleInit) GetProcAddress(mod, "OnModuleInit");
		proc(instance);
	}

	system("pause");
    return 0;
}

