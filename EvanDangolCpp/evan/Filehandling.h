#pragma once
#include<iostream>
#include<fstream>
using namespace std;
namespace evan
{
	void read()
	{
		fstream f("EvanDangolCpp/evan/data/abc.txt", ios::in);
		if (f.fail())
		{
			cout << "error";
			exit(100);
		}
		char buf;
		while (f.get(buf))
		{
			cout << buf;
		}
		f.close();
	}
}
