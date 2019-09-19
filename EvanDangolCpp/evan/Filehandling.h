#pragma once
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
namespace evan
{
	void read()
	{
		fstream f("data/abc.txt", ios::in);
		if (f.fail())
		{
			cout << "error";
			_getch();
			exit(100);
		}
		char * cp = (char *)malloc(sizeof(char));
		char buf;
		int count = 0;
		while (f.get(buf))
		{
			cp[count] = buf;
			count++;
			cp = (char *)realloc(cp, sizeof(char)*count+1);


		}
		cp[count] = '\0';
		cout << cp;
		f.close();
		_getch();
	}
}