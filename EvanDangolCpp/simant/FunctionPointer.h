#pragma once
#include<iostream>
using namespace std;
namespace simant {
	void hello(int x)
	{
		cout << x * 2;
	}
	void add(int x, int y)
	{
		cout << x + y;
	}
	void xyz()
	{
		cout << "hello simant";
	}
	typedef void(*sim)();
	//typedef void(*fnptr)(int, int);
	typedef void(*fnptr2)(int);

	int functionpointer_run()
	{
		void(*fnptr)(int, int);

		fnptr = &add;

		int a = 5;

		fnptr(45, 45);

		sim simm;
		simm = &xyz;
		simm();

		return 0;
	}



}