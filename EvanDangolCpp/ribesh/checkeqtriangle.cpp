#include <iostream>
using namespace std;

int IseqTriangleValid(int a,int b, int c)
{   
    if(a!=60)
    {
    	return 0;
	}
	
	if(b!=60)
	{
		return 0;
	}
	if(c!=60)
	{
		return 0;
	}
	
	return 1;
	
	
	
}



	
	
	
	


void fghf()
{
	int x,y,z;
	cout<<"enter angle A"<<endl;
	cin>>x;
	
	cout<<"enter angle B"<<endl;
	cin>>y;
	
	cout<<"enter angle C"<<endl;
	cin>>z;
	
	int a=IseqTriangleValid(x,y,z);
	
	 if(a==1)
   {
   	cout<<"it is valid"<<endl;
   }
   else
   {
   	cout<<"it is not valid"<<endl;
   }

	
	system("pause");
}
