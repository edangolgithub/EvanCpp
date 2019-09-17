#pragma once
#include<iostream>
#include<string>

using namespace std;

namespace birat
{
	void pointer1()
	{
		int num = 6;

		int* p;
		p = &num;
		cout << num << endl; //6

		cout << &num << endl; //address of num

		cout << p << endl; // address of num

		cout << &p << endl; // address of p

		cout << *p << endl; //6


	}
}
void pointer_2()
{
	int dig = 9;

	int* a;
	a = &dig;
	cout << dig << endl;
	cout << &dig << endl;
	cout << a << endl;
	cout << &a << endl;
	cout << *a << endl;

	}

