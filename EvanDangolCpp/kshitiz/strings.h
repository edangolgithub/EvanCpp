#pragma once

#include<iostream>
#include<string>
using namespace std;



void pointer1()
{
	int arr[] = { 23,56,1,6,2,31 };

	int* p;

	p = arr;

	p = p + 5;
	cout << *p;
	p = p - 4;
	cout << *p;

	*p = 76;



	//* == dereference operator
}

void string1()
{
	
	//char name[] = { 'a','b','c','d','e' };
	//char name[  ] = "abcde";

	//strcpy
	//strcmp
	//strcmpi
	//strlen

	int aq;
	aq = 7;

	char x[50];

	strcpy(x, "ABCD");  //65

	char y[50] = "abcd"; //97

	//cout << strcmp(y, x);  //0  -1  1

	cout << strlen(x);
	
}