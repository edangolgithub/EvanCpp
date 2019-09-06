#include <iostream>
using namespace std;

int IsTriangleValid(int a,int b, int c)
{   
    int t= a+b+c;
	if(t==180)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}


void istrianglevalid(int a, int b, int c)
{

   int	t=a+b+c;
   if(t==180)
   {
   	cout<<"it is valid"<<endl;
   }
   else
   {
   	cout<<"it is not valid"<<endl;
   }
	
	
	
	
}

void erter()
{
	int x,y,z;
	cout<<"enter angle A"<<endl;
	cin>>x;
	
	cout<<"enter angle B"<<endl;
	cin>>y;
	
	cout<<"enter angle C"<<endl;
	cin>>z;
	
	int a=IsTriangleValid(x,y,z);
	
	 if(a==1)
   {
   	cout<<"it is valid"<<endl;
   }
   else
   {
   	cout<<"it is not valid"<<endl;
   }
	istrianglevalid(x,y,z);
	
	system("pause");
}
