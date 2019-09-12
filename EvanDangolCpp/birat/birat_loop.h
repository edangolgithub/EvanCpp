#pragma once
#include<iostream>
using namespace std;
namespace birat {

	void whileloop()
	{
		// while do for       foreach
		int i = 1; //init

		while (i < 10)//condition
		{
			cout << "hello while"<<endl;
			i=i+2;   //incre/decre 
		}
	}

	void doloop()
	{
		int i = 1;

		do
		{
			cout << "hello do"<<endl;
			i++;
		} while (i < 10);
	}
	void forloop()
	{
		for (int i = 1; i < 10; i++)
		{
			cout << "hello for" << endl;
		}
	}
	void dotest()
	{
		int x, y;
		int sum;
		cout << "enter a number:";
		cin >> x;
		cout << "enter another number:";
		cin >> y;
		sum = x + y;
		cout << "sum is:" << sum;
	 }
	void anotherfor()
	{
		for (int i = 3; i < 12; i++)
		{
			cout << "good morning" << endl;
		}
	}
	void comparision ()
	{
		int i = 7;
		while(i<14)
		{
			cout << "hello there" << endl;
			i = i + 2;

		}
	}

	void power()
	{
		int s = 45;
		for (s = 12; s > 3; s--)
		{
			cout << s << endl;
		}
	}
	void nick()
	{
		int x = 4;
		do
		{
			cout << "hey" << endl;
			x++;
		} while (x < 8);
	}
	void run()
	{
	nick();
	}
}