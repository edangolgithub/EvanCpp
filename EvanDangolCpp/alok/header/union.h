#pragma once

#include<iostream>
using namespace std;
struct st
{
	int i;
	char ch;
};
union test
{
	int i;
	char ch;
};

typedef test T;
typedef st S;

void rununion()
{
	T tt;
	tt.i = 65;
	tt.ch = 'e';
	
	cout << tt.i;
	S ss;
	ss.i = 65;
	ss.ch = 'e';
	cout << ss.i;
}