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

	gyam(int chance,int min=1,int max=100)
	{
		this->chance = chance;
		this->min = min;
		this->max = max;
		srand(time(NULL));	
		mem = rand() % max + min;
		//cout << mem << endl;
	}

	void playgyam()
	{
		cout << "you have " << chance << " chances are you ready to play gyam???" << endl;
		
		while (chance > 0)
		{
			cout << " guess a number between in range of 10 difference " << min << " to " << max << endl;
		
			cin >> num;

			if (num > mem)
			{
				cout << "too high"<<endl;
			}
			else if (mem > num)
			{
				cout << "too low"<<endl;
			}
			else
			{
				cout << "correct"<<endl;
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
void startgame()
{
	int mi;
	cout << "enter minimum value of 10 difference with maximum " << endl;
	cin >> mi;
	int ma;
	cout << "enter maximum value  10 difference with minimum " << endl;
	cin >> ma;
	int diff = ma - mi;
	if (diff >= 9)
	{
		int ch;
		cout << "enter the chance greater than 0" << endl;
		cin >> ch;

		if (ch == 0)
		{
			cout << "eroor";
		}
		else
		{
			if (ch <= ceil(log2(diff)))
			{
				gyam g(ch, mi, ma);
				g.playgyam();
			}
			else {
				cout << "too many chance";
			}
		}

	}
	else
	{
		cout << "there should be differnce of at least 10";
	}
}