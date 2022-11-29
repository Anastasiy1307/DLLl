#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

//__declspec(dllimport) int myFunc(LPWSTR str);
//__declspec(dllimport) void FileRead(struct person* pers);


//__declspec(dllimport) void writeToFileIvanova(struct person* current, int countCurrent);
//__declspec(dllimport) void searchSurnameIvanova(struct person* pers);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{

	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:

		break;

	case DLL_THREAD_ATTACH:

		break;

	case DLL_THREAD_DETACH:

		break;

	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

__declspec(dllimport) int ch(int a, int b);
typedef int(_cdecl* forReadData)(struct MyStruct*);
struct MyStruct
{
	char* Surname;
	char* Name;
	char* Otchestvo;
	int Age;
};
int ch(int x, int y)
{
	int chet = 0;

	int a = -1;
	for (int i = x; i < y; i++)
	{
		if (i == 1)
			a = 0;
		for (int d = 2; d * d <= i; d++)
			if (i % d == 0)
			{
				a = 0;
				break;
			}
		if (a < 0) a = 1;
		if (a)
			chet++;
		a = -1;
	}
	char* d = calloc(100, sizeof(char));
	sprintf(d, " %d", chet);
	MessageBoxA(NULL, d, NULL, NULL);
}
