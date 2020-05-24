#pragma once

#include <stdio.h>
#include <fstream>
#include <string>

// ŠÖ”‚ğŠO•”ŒöŠJ‚·‚é‚±‚Æ‚ğéŒ¾
#ifdef HELLODLL_EXPORTS
#define HELLODLL_API extern "C" __declspec(dllexport)
#else
#define HELLOTEST_API extern "C"__declspec(dllimport)
#endif

HELLODLL_API void __cdecl doTest(char* msg);

