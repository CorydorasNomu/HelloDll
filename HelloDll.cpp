#include "pch.h"
#include "HelloDll.h"
#include <iostream>

#define VC_DLL_EXPORTS

void __cdecl doTest(char* msg)
{
	std::string filename = "test.txt";
	std::ofstream writing_file;
	writing_file.open(filename, std::ios::out);
	writing_file << msg << std::endl;
	writing_file.close();
}