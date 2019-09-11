#pragma once
#include<iostream>
using namespace std;
namespace simant
{
	int a = 5; //ds
	int b; //bss
	int z = 5; //ds
	static int y = 7; //ds
	void dynamicmemory()
	{
		int* num = (int*)malloc(sizeof(int) * 5); // heap
		num[0] = 8;
		num[1] = 18;
		num[2] = 82;
		num[3] = 86;
		num[4] = 28;
		num = (int*)realloc(num, sizeof(int) * 6); // heap
		num[5] = 100;
		num = (int*)realloc(num, sizeof(int) * 10); // heap
		num[9] = 50;
		for (size_t i = 0; i < 10; i++)// i -->stack
		{
			cout << num[i] << endl;
		}
	}
	void pointer()
	{
		string food = "Pizza";  // A food variable of type string
		string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

		// Output the value of food (Pizza)
		cout << food << "\n";

		// Output the memory address of food (0x6dfed4)
		cout << &food << "\n";

		// Output the memory address of food with the pointer (0x6dfed4)


		*ptr = "simant";
		cout << food << "\n";


	}

	void pointer1()
	{
		

		int x = 5;  // datatype->int  byte size 4  name->x  address=X0478c

		int* p = &x;
		cout << "address of x   " << &x << endl;
		cout << "value of p   " << p << endl;

		*p = 40;
		cout << x << endl;


	}
}