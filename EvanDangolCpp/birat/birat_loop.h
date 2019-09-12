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

	void run()
	{
		forloop();
	}
}