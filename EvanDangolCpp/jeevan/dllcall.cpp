#include<iostream>
#include <stdio.h> 
#include<windows.h>
using namespace std;

       /*
	������Define the Function in the DLL for reuse. This is just prototyping the dll's function.
	����� A mock of it. Use "stdcall" for maximum compatibility.
	���*/
typedef int(__cdecl * pICFUNC)();

void eeeerwwe()
{
	
	//get handle to dll 
	HINSTANCE hGetProcIDDLL = LoadLibrary("Project1.dll");
	
if(hGetProcIDDLL==NULL)
{
	cout<<"error";
	return ;
}

	// get pointer to the function in the dll
	FARPROC lpfnGetProcessID = GetProcAddress(HMODULE(hGetProcIDDLL), "foo");

	    
	

	pICFUNC foo;
	foo = pICFUNC(lpfnGetProcessID);

	
	
	/* The actual call to the function contained in the dll */
 foo();

	/* Release the Dll */
	FreeLibrary(hGetProcIDDLL);

	/* The return val from the dll */
	return ;
}
