#pragma once

#include <stdio.h>
#include <fstream>
#include <string>

// �֐����O�����J���邱�Ƃ�錾
#ifdef HELLODLL_EXPORTS
#define HELLODLL_API extern "C" __declspec(dllexport)
#else
#define HELLOTEST_API extern "C"__declspec(dllimport)
#endif

HELLODLL_API void __cdecl doTest(char* msg);

