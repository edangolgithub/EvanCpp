#include<stdio.h>
#include<iostream>
using namespace std;
void put()
{
	putchar('b');
}
void get()
{
	char c;
	c=getchar();
	putchar(c);
}

void getstring()
{
	char ch[10];
	gets_s(ch);
	puts(ch);
	puts("sdjksdd");
}

void cinputget()
{
	
		char ch;
		cin.get(ch);
		cout.put('y');
		cout.put(ch);
	
}
void cingeltionewrite()
{
	char ch[50];
	cin.getline(ch, 50);
	cout.write(ch, 2);
}
