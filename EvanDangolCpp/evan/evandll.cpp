#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
extern "C"
{
	__declspec(dllexport) void DisplayHelloFromMyDLL()
	{
		printf("Hello DLL.\n");
	}

	__declspec(dllexport) char* convertToUpperCase(const char* s) {
		char* newstr = new char[strlen(s) + 1];
		size_t i = 0;
		for (; s[i]; i++)
			newstr[i] = toupper(s[i]);
		newstr[i] = '\0';
		return newstr;
	}
	__declspec(dllexport) char* reverse2(const char* str)
	{
		char* str1 = (char*)malloc(sizeof(char) * strlen(str));
		int i = 0;
		while (true)
		{

			i++;
			str++;
			if (*str == '\0')
				break;
		}



		int a = 0;
		str--;
		while (i >= 0)
		{
			str1[a] = *str;
			str--;
			a++;
			i--;
		}
		return str1;
	}
}