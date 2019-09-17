#pragma once
#include<iostream>
#include<string>

using namespace std;

namespace birat
{
	void add(int a, int b,int c,string x)
	{
		cout << a + b + c << endl;
		cout << x;
	}

	int makedouble(int x)
	{
		return x * 2;
	}

	void subt(string a, string b)
	{
		cout << a + b << endl;
		cout << b;
	}

	int makesmall(int b)
	{
		return b / 3;
	}
	void myfunt(string fname)
	{
		cout << fname << "grg.\n";
	}
	void my_age(string fname, int age)
	{
		cout << fname << "gurung." << age << "years old.\n";
	}
	int mixed(int d,int e)
	{
		return d - e;
	}
	
	
}
