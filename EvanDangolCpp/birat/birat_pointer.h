#pragma once
#include<iostream>
#include<string>

using namespace std;

namespace birat
{
	int length(const char name[])
	{
		const char* cp;
		cp = name;
		int count = 0;
		while (*cp != '\0')
		{
			cp++;
			count++;
		}
		return count;
	}
	void pointer3()
	{
		int arr[] = { 12, 56, 43,78,34 };
		int* p;
		p= arr;
		p++;
		p++;
		p++;
		p--;
		p--;
		p--;
		for (size_t i = 0; i < 5; i++)
		{
		//cout << arr[i] << endl;
		}
		int i = 0;
		
		while (i < 5)
		{
			//cout << *p << endl;
			p++;
			i++;
		}

		char name[] = "birat";
		char* cp;
		cp = name;

		for (size_t i = 0; i < 5; i++)
		{
			//cout << name[i] << endl;
		}

		i = 0;
		while (i < 5)
		{
			cout << *cp << endl;
			cp++;
			i++;
		}

	}
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
	void straw()
	{
		int car[] = { 17,92,31,42,53 };
		int* a;
		a = car;
		for (int i = 0; i < 5; i++)
		{
			cout << car[i] << endl;
			a++;
			
			
		}
		
		
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
