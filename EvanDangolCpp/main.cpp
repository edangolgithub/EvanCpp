#include <iostream>
#include <windows.h>
#include "evan/EvanDllWrapper.h"
using namespace evan;
using namespace std;

char* convertToUpperCase(const char *s) {
	char *newstr = new char[strlen(s) + 1];
	size_t i = 0;
	for (; s[i]; i++)
		newstr[i] = toupper(s[i]);
	newstr[i] = '\0';
	return newstr;
}
char * reverse2(const char * str)
{
	char * str1 = (char *)malloc(sizeof(char)*strlen(str));
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

int main()
{
	cout << reverse2("cactus computer");
	cout << convertToUpperCase("djshd");
	return 0;
	EvanDll ed("evandll.dll");
	
	ed.callthisfunction("add", evan::int_intint,"evan singh",5,5,6);
	
	std::cin.get();

	return 0;
}