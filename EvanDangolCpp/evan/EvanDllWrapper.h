#include <iostream>
#include <windows.h>
#include<stdarg.h>
using namespace std;

namespace evan
{
	enum methodsignature
	{
		void_void, void_int, int_int,void_charpointer,int_intint,charpointer_charpointer
	};
	class EvanDll
	{
		
		typedef void(*FunctionFunc)(void);
		typedef void(*voidcharpointer)(const char*);
		HINSTANCE hInstLibrary;
	public:
		EvanDll(){}
		EvanDll(const char* path)
		{
			if (path != NULL)
			{
				LoadDll(path);
			}
			else
			{
				exit(404);
			}
			
		}
		void LoadDll(const char* path)
		{
			hInstLibrary= LoadLibrary(path);
		}
		void callthisfunction(const char* functionname, methodsignature sig)
		{
		}
		void callthisfunction(const char* functionname, methodsignature sig,  const char *charargs = "", float intarg = 0, ...)
		{

			if (hInstLibrary)
			{
				switch (sig)
				{
				case evan::void_void:
					FunctionFunc _FunctionFunc;
					_FunctionFunc = (FunctionFunc)GetProcAddress(hInstLibrary, functionname);
					if (_FunctionFunc)
					{
						_FunctionFunc();
					}

					break;
				case evan::void_int:
					FunctionFunc _intparamvoidFunc;
					_intparamvoidFunc = (FunctionFunc)GetProcAddress(hInstLibrary, functionname);
					if (_intparamvoidFunc)
					{
						((void(*)(int)) _intparamvoidFunc)(intarg); //imp casting function pointer remeber evan
					}
					break;
				case evan::int_intint:
					
					FunctionFunc _intparamintintFunc;
					_intparamintintFunc = (FunctionFunc)GetProcAddress(hInstLibrary, functionname);
					if (_intparamintintFunc)
					{
						((int(*)(int,int)) _intparamintintFunc)(intarg,45); //imp
					}
					break;
				case evan::void_charpointer:
					voidcharpointer _charpointerFunc;
					_charpointerFunc = (voidcharpointer)GetProcAddress(hInstLibrary, functionname);
					if (_charpointerFunc)
					{
						_charpointerFunc(charargs);
					}
					break;
				default:
					break;
				}
			  


				
				FreeLibrary(hInstLibrary);
			}
			else
			{
				std::cout << "DLL Failed To Load!" << std::endl;
				exit(500);
			}

		}
		void callthisfunctionc(const char* functionname, methodsignature sig, const char *charargs = "",...)
		{

			if (hInstLibrary)
			{
				switch (sig)
				{
				case evan::void_void:
					FunctionFunc _FunctionFunc;
					_FunctionFunc = (FunctionFunc)GetProcAddress(hInstLibrary, functionname);
					if (_FunctionFunc)
					{
						_FunctionFunc();
					}

					break;
				
				
				case evan::void_charpointer:
					voidcharpointer _charpointerFunc;
					_charpointerFunc = (voidcharpointer)GetProcAddress(hInstLibrary, functionname);
					if (_charpointerFunc)
					{
						_charpointerFunc(charargs);
					}
					break;
				case evan::charpointer_charpointer:
					FunctionFunc _fpointer;
					_fpointer = (FunctionFunc)GetProcAddress(hInstLibrary, functionname);
					if (_fpointer)
					{
					cout<<	((char*(*)(const char*)) _fpointer)(charargs); //imp
					}
					break;
				default:
					break;
				}




				FreeLibrary(hInstLibrary);
			}
			else
			{
				std::cout << "DLL Failed To Load!" << std::endl;
				exit(500);
			}

		}

	};
}