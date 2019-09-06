#include<iostream>
using namespace std;

void f1()
{
	cout<<5<<endl;
}

void f2(int i)
{
	cout<<i<<endl;
}

int f3()
{
	return 10;
}

int f4(int i)
{
	return i;
}

void tyuty()
{
	f1();
	f2(5);
	
int value=f3();
cout<<value<<endl;

int x=f4(100);
cout<<x<<endl;


cout<<f3()<<endl;	
cout<<f4(100)<<endl;
	
}
