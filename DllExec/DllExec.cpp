#include <windows.h>
#include <iostream>

#define LOAD_DLL_ERR 1
#define LOAD_FUNC_ERR 2

int main(int argc, char* argv[])
{
	// 関数ポインタの宣言
	typedef void(*FUNC)(char* msg);

	//　DLLを指定してアドレス空間内にマッピング
	HMODULE hModule = LoadLibrary(L"HelloDll.dll");
	if (hModule == NULL)
	{
		DWORD errorcode = GetLastError();
		std::cout << "FAIL TO LOAD LIBRARY: " << errorcode << "\n";
		return LOAD_DLL_ERR;
	}

	// DLL関数のアドレスを取得
	FUNC func = (FUNC)GetProcAddress(hModule, "doTest");
	if (func == NULL)
	{
		DWORD errorcode = GetLastError();
		std::cout << "FAIL TO LOAD FUNCTION: " << errorcode << "\n";
		return LOAD_FUNC_ERR;
	}

	func(argv[1]);			// 関数実行
	FreeLibrary(hModule);	//開放

	return 0;
}