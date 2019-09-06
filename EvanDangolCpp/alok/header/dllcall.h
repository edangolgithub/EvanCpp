#include<iostream>
#include <stdio.h> 
#include<windows.h>
using namespace std;

       /*
	      Define the Function in the DLL for reuse. This is just prototyping the dll's function.
	      A mock of it. Use "stdcall" for maximum compatibility.
	   */
typedef int(__cdecl * pICFUNC)();

int calldll()
{
	
	//get handle to dll 
	HINSTANCE hGetProcIDDLL = LoadLibrary(L"Project1.dll");
	
if(hGetProcIDDLL==NULL)
{
	cout<<"error";
	return 1;
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
	return 1;
}
void dl()
{
	//Load the DLL
	HMODULE lib = LoadLibrary(L"p32.dll");

	//Create the function
	typedef void(*FNPTR)();
	FNPTR myfunc = (FNPTR)GetProcAddress(lib, "foo");

	//EDIT: For additional safety, check to see if it loaded
	if (!myfunc) {
		//ERROR.  Handle it.
	}

	//Call it!
	myfunc();
	FreeLibrary(lib);
}