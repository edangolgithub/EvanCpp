#include <stdio.h> 
#include<windows.h>
typedef void(__stdcall *dllfunction)();
void eeeerrwwe()
{
	HINSTANCE hi = LoadLibrary("Project1.dll");
    dllfunction	Getprocess =(dllfunction)GetProcAddress(hi, "foo");
	if (NULL != Getprocess)
	{
		
		Getprocess();
	}
	FreeLibrary(hi);
}
