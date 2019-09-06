#include<iostream>
using namespace std;

float getinterest(float p,float t,float r)
{
	float i=(p*t*r)/100;
	return i;
	}
	
 int checkvalid(int a)
 
 {  
   if(a>=16)
   {
   	  return 1;
   }
    else
    {
    	return 0;
	}
 	
	 }	

void dsfds()
{
	cout<<getinterest(10000,2,12);
	int x=checkvalid(17);
	  if(x==1)
	  {
	  	cout<<"you can vote"<<endl;
	  }
	    else if(x==0)
	    {
	    	cout<<"you cannot vote"<<endl;
		}
	
	system("pause");
}
