#pragma once
#include<iostream>
using namespace std;

#include<string>
void swap(int *, int *);
void exchange(int **, int *);
int pointertopointermain()
{
	int a = 5, b = 15;
	cout << "Before Swap, a=" << a << "and b=" << b << "\n";
	swap(&a, &b);
	cout << "\n After Swap, a=" << a << "and b=" << b << "\n";
	return 0;
}
void swap(int *aa, int *bb)
{
	exchange(&aa, bb);
}
void exchange(int **cc, int *dd)
{
	cout << **cc;
	return;
	int t;
	t = **cc;
	**cc = *dd;
	*dd = t;
}

int arraypointer()
{
	int iarr[] = { 10,12,14,16,18 };
	int *ip;
	for (ip = &iarr[0]; ip <= &iarr[4]; ip++)
		cout << *ip;  cout << "\n";
	return 0;
}
int arraypointer1()
{
	int iarr[] = { 10,12,14,16,18 };
	int *ip;
	for (ip = iarr; ip <= &iarr[4]; ip++)
		cout << *ip;
	cout << "\n";
	return 0;
}
void change(int *b)
{
	for (int i = 0; i <= 4; i++)
	{
		*b = *b + 1;
		b++;
	}
}
int changerun()
{
	int a[5] = { 4,5,6,7,8 };
	change(a);
	for (int i = 4; i >= 0; i--)
		cout << a[i];
	cout << "\n";
	return 0;
}

int pointer1() 
{
	int iarr[] = { 10,11,12,13,14 };  
	int i, *p;
	for (p = iarr, i = 0; p + i <= iarr + 4; p++, i++) 
		cout << *(p + i); 
	cout << "\n"; 
	return 0;
}
void pointer2()
{
	
		int *Queen, Moves[] = { 11,22,33,44 };
		Queen = Moves;
		Moves[2] += 22;
		cout << "Queen @" << *Queen << endl;
		*Queen -= 11; 
		Queen += 2;
		cout << "Next @" << *Queen << endl;
		Queen++;
		cout << "Finally @" << *Queen << endl;
		cout << "New Origin @" << Moves[0] << endl;
	
}
void pointer3()
{
	
		int Numbers[] = { 2,4,8,10 }; 
		int *ptr = Numbers; 
		for (int C = 0; C < 3; C++) 
		{ 
			cout << *ptr << "@";  
			ptr++;
		} 
		cout << endl; 
		for (int C = 0; C < 4; C++) 
		{ 
			(*ptr) *= 2; 
			--ptr;
		}  
		for (int C = 0; C < 4; C++) 
			cout << Numbers[C] << "#"; 
		cout << endl;
}
class state {
char *state_name;
int size;  
public: 
	state()
	{ 
		size = 0;
		state_name = new char[size + 1];
	}  
	state(const char *s) 
	{
		size = strlen(s);
		state_name = new char[size + 1]; 
		strcpy(state_name, s);
	}
	void display()
	{
		cout << state_name << endl;
	}
void Replace(state &a, state &b)
{
	size = a.size + b.size;  
	delete state_name; 
	state_name = new char[size + 1];
	strcpy(state_name, a.state_name);  
	strcpy(state_name, b.state_name);
}
};
int staterun()
{
	const char *temp = "Delhi"; 
	state state1(temp);
	state state2("Mumbai");
	state state3("Nagpur");
	state S1;
	state S2;
	S1.Replace(state1, state2);  
	S2.Replace(S1, state3);
	S1.display(); 
	S2.display();
	return 0;
}
void removeSpaces(char *c)
{
	cout << c;
	char x[20];
	int j = 0;
	for (int i = 0; c[i]!='\0' ; i++)
	{
		if (c[i] == ' ')
		{
			
		}
		else
		{
			x[j]= c[i];
			j++;
		}
		
		
	}
	x[j]= '\0';
	cout << x;
}
void pointer4()
{
	char input[50] = "I       like            milk";  
	//cout << input;
	removeSpaces(input); 
	
}
void pontera()
{
	int a = 7;
	int *p = &a;
	cout << *p << endl;
	cout << p << endl;

	(*p)++;
	p++;
	cout << *p << endl;
	cout << p << endl;
}

void testchange()
{
	int a[5] = { 4,5,6,7,8 };
	change(a);
	for (int i = 4; i >= 0; i--)
		cout << a[i];
	cout << "\n";
}


void pointer5()
{
	int arr[] = { 23,54,12,67,24 };

	int *p = arr;
	//*p = *p + 1;
	p = p + 5;
	*p = 5;
	cout << *p;
}
void pointer6()
{
     char  arr[] = "hello";
	 char arra[6];
	 strcpy(arra, arr);
	char *p = arr;
	//*p = *p + 1;
	p = p + 1;
	*p = 65;
	cout << *p;
	cout << arr;
}
#define	Modify(N)	N*3+10
void	runmodify()
{
	int	LIST[] = { 10,15,12,17 };
	int	*P = LIST, C;
	for (C = 3; C >= 0; C--)
		LIST[C] = Modify(LIST[C]);
	for (C = 0; C <= 3; C++)
	{
		cout << *P << ":";
		P++;
	}
}
