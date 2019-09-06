#pragma once
#include<iostream>
using namespace std;

void nestedloop1()
{
	
	for (size_t i = 1; i <=5; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			cout << j;
		}
		
		cout << endl;
	}
}
void nestedloop2()
{

	for (size_t i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << endl;
	}
}

void nestedlooprun()
{
	nestedloop1();
	nestedloop2();
}