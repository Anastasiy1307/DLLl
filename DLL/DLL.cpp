#include <windows.h>
#include <stdio.h>
#define PATH L"DLLCode.dll"
typedef int(_cdecl* Ch)(int a, int b);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HINSTANCE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	Ch ch = (Ch)GetProcAddress(hMyDLL, "ch");
	ch(2, 30);
	FreeLibrary(hMyDLL);
	return 0;
}
