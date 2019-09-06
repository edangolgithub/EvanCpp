#pragma once
#include<stdio.h>
void q1b()
{
	//#include<stdio.h>
	char msg[] = "cbse 2014";
	for (int i = 5; i < msg[i]; i++)
	{
		puts(msg);
	}
}
#include<iostream>
using namespace std;
#include<iomanip>
void qq1b() {
	int Rno = 465;
	char SName[] = "Ajay Bhaskar";
	cout << setw(6) << Rno << setw(25) << SName << endl;
}

struct Screen {
	int C, R;
};
void ShowPoint(Screen P)
{
	cout << P.C << P.R << endl;
}
void q1c()
{
	Screen Point1 = { 5, 3 };
	ShowPoint(Point1);
	Screen Point2 = Point1;
	Point1.C += 2;
	Point1.R = Point1.R + 2;
}
void ChangetheContent(int Arr[], int Count)
{
	for (int C = 0; C < Count; C++)
		Arr[C] = Arr[Count - C - 1];
}
void q1d()
{
	int A[] = { 1, 2, 3 }, B[] = { 20, 30, 40, 50 }, C[] = { 100, 200 };
	ChangetheContent(A, 3);
	ChangetheContent(B, 4);
	ChangetheContent(C, 2);
	for (int L = 0; L < 3; L++)
		cout << A[L] << '#';
	cout << endl;
	for (int L = 0; L < 4; L++) cout << B[L] << '#';
	cout << endl;
	for (int L = 0; L < 2; L++)
		cout << C[L] << '#';
	cout << endl;
}
void q1e()
{
	char a[] = "Exam - 2011 AheAd";
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] --;
		else
			if (a[i] >= '0' && a[i] <= '9')
				a[i] = a[i - 1];
			else
				if (a[i] >= 'A' && a[i] <= 'Z')
					a[i] += 32;
				else
					a[i] = '#';
	}   
	puts(a);
	//ew`l########agdac
}
const int LIMIT = 4;
#include<cstdlib>
void q1f() { 
	srand(time(NULL));
	int Points;

	for (int x = 0; x < 100; x++)
	{
		Points = 100 + rand() % LIMIT;
	for (int P = Points; P >= 100; P--) 
		cout << P << '#';    
	cout << endl;
	}
}

void isapha()
{
	cout << isalpha('a');
}
void is() {
	char Line[] = "Good@LOGIC";
	for (int I = 0; Line[I] != '\0'; I++) { 
		if (!isalpha(Line[I])) 
			Line[I] = '$';
		else if (islower(Line[I])) 
			Line[I] = Line[I] + 1; 
		else
		{
				Line[I] = Line[I + 1];
		}
	
	}
	cout << Line;
}