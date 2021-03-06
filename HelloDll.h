#pragma once

#include <stdio.h>
#include <fstream>
#include <string>

// 関数を外部公開することを宣言
#ifdef HELLODLL_EXPORTS
#define HELLODLL_API extern "C" __declspec(dllexport)
#else
#define HELLOTEST_API extern "C"__declspec(dllimport)
#endif

HELLODLL_API void __cdecl doTest(char* msg);

