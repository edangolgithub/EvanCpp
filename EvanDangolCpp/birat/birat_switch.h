#pragma once
#include <iostream>
using namespace std;
namespace birat
{
	void switchh()
	{
		int a = 5;

		switch (a)
		{
		case 5:
			cout << "hello";
			break;
		case 13:
			cout << "hi";
			break;
		case 2:
			cout << "bye";
			break;
		default:
			cout << "wow";
			break;
		}

		if (a == 1)
		{
			cout << "hello";
		}
		else if (a == 13)
		{
			cout << "hi";
		}
		else if (a == 2)
		{
			cout << "bye";
		}
		else
		{
			cout << "wow";
		}

	}
	void even_odd()
	{
		int x;
		cout << "enter a number" << endl;
		cin >> x;
		if (x % 2 == 0)
		{
			cout << "it is an even number";
		}
		else
		{
			cout << "it is odd number";
		}
	}
}
//program to find whether the giveninput is even or odd number.
