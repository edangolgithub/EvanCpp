#pragma once
#include<iostream>
using namespace std;
void output1()
{
	long Number = 7583241;
	int First = 0, Second = 0;
	do
	{
		int R = Number % 10;
		if (R % 2 == 0)
			First += R;
		else
			Second += R;
		Number /= 10;
	} while (Number > 0);
	cout << First - Second;
}
void output2()
{
	char Text[] = "Mind@Work!";
	for (int i = 0; Text[i] != '\0'; i++)
	{
		if (!isalpha(Text[i]))
			Text[i] = '*';
		else if (isupper(Text[i]))
			Text[i] = Text[i] + 1;
		else Text[i] = Text[i + 1];
	}
	cout << Text;
}
void location(int &x, int y = 4)
{
	y += 2;
	x += y;
}
void runlocation()
{
	int px = 10;
	int py = 2;
	location(py);
	cout << px << py;
	location(px, py);
	cout << px << py;
}