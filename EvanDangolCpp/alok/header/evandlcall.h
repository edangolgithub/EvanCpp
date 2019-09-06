#include <stdio.h> 
#include<windows.h>
typedef void(__stdcall *dllfunction)();
void calldll()
{
	HINSTANCE hi = LoadLibrary(L"p32.dll");
    dllfunction	Getprocess =(dllfunction)GetProcAddress(hi, "foo");
	if (NULL != Getprocess)
	{
		
		Getprocess();
	}
	FreeLibrary(hi);
}
