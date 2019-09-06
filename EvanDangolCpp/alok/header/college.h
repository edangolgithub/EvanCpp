#pragma once
#include<iostream>
#include <ctime>
#include <cstdlib>
#include<fstream>
#include<stdio.h>
#include"loop.h"


using namespace std;
void print(int num)
{
	printf("%d\n", num);
}
void _(int num)
{
	printf("%d\n", num);
}

void assign()
{
	int a = 10;
	int b = 20;
	a += b;
	a -= b;//a=a-b
	a *= b;//a=a*b
	a /= b;//a=a/b
	a %= b;//a=a%b
	a <<= 1;//a=a<<1 1010 << 1 = 10100
	a = 5;//101
	a <<= 1;// a=a>>1  101--->>010   101----->1010
	printf("a+=b=%d",5&6);//a=a+  101 110  100

}

void prefix()
{
	int a = 10;
	int b;
	

	printf("b=%d", b = --a);
}

void confuson()
{
	int a = 10;
	int b;
	b = ++a;
	print(b);//11
	b = a++;//12
	print(b = a++); //12 13
	 b = --a; //12
	print(b = --a);  //11
	b = a--; //10 //
	print(b = a--); //9  10



}

void confusion2()
{
	int x = 15;
	int y;
	y = x;
	_(y);//p15
	y = ++x;//16
	_(y = ++x); //p 17

	y = --x;//16
	_(y = --x);//p15
	
	y = x++;//16
	_(y = x++); //p16  ->17
	y = x--; // //16
	_(y = x--); //p16  ->15

}

void sizeeof()
{
	int a= 10;
	double b = 4.123;
	printf("sizeofa=%d\n", sizeof(a));
	printf("sizeofb=%d\n", sizeof(b));
	printf("sizeofint=%d\n", sizeof(int));
}


void ternary()
{
	int x = 10, y;
	y = (x == 20 )? 10 : 20;
	_(y);
}

void arrray()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 _(a[9]);
 for (int i = 0; i < 10; i++)
 {
	 _(a[i]);
 }

}


