#pragma once
#include<iostream>
using namespace std;

namespace simant {

	void pointer1()
	{
		char ch[] = { 'a','b','x','y','e' };

		char ch1[] = "simant";

		const char* x = "hello world";

		cout << *x;
		char* cp = ch1;

		//cp = cp + 3;
		//cout <<*cp << endl;

		int count = 0;
		while (*cp != '\0')
		{
			count++;
			cp++;
		}
		//cout << count;


		int arr[] = { 31,16,60,20,32,77,12,19 };
		int* p = arr;


		p = p + 5;
		//	cout << *p;
			/*for (size_t i = 0; i < 8; i++)
			{
				if (*p >= 16)
				{
					cout << *p << endl;
				}
				p++;
			}*/



	}
}
