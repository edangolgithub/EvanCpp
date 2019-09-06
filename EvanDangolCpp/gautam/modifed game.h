#pragma once
#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
class gyam
{
public:
	int num;
	int mem;
	int chance;
	int min;
	int max;

	gyam(int chance, int min = 1, int max = 100)
	{
		this->chance = chance;
		this->min = min;
		this->max = max;
		srand(time(NULL));
		mem = rand() % max + min;
		cout << mem << endl;
	}

	void playgyam()
	{
		cout << "you have " << chance << " chances are you ready to play gyam???" << endl;

		while (chance > 0)
		{
			cout << " guess a number between " << min << " to " << max << endl;

			cin >> num;

			if (num > mem)
			{
				cout << "too high" << endl;
			}
			else if (mem > num)
			{
				cout << "too low" << endl;
			}
			else
			{
				cout << "correct" << endl;
				break;
			}
			if (chance == 1)
			{
				cout << "you lost" << endl << "the number was " << mem << endl;
				break;
			}
			cout << "you have " << chance - 1 << " chance left" << endl;
			chance--;
		}


	}
};