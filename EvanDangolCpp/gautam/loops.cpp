#include<iostream>
using namespace std;
void a(int x)
{
	
}
void a(string x)
{
	
}

void drse()
{
	for(int i=0;i<20;i++)
	{
		if(i==5)
		{
		continue;
		}
		cout<<"(for)value of i :"<<i<<endl;
		
	}
	int i=0;
	while(i<10)
	{
			cout<<"(while)value of i :"<<i<<endl;
		i++;
	}
	i=0;
	do
	{
		cout<<"(do)value of i :"<<i<<endl;
		i++;
	}while(i<5);
}
