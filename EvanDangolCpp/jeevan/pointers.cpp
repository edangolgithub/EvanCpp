#include<iostream>
using namespace std;
void change(int *); 

void pontera()
{
	int a=7;
	int *p=&a;
	cout<<*p<<endl;
	cout<<p<<endl;

	(*p)++;
		p++;
	cout<<*p<<endl;
	cout<<p<<endl;
}


void uiuy()
 {
  pontera();
	   return ;
	    }
	    
	void testchange()
	{
		int a[5]={4,5,6,7,8};  change(a);  for(int i=4;i>=0;i--)   cout<<a[i];  cout<<"\n"; 
	}
		 void change(int *b) 
		 { for(int i=0;i<=4;i++)
		   {
		    *b=*b+1;
			   b++; 
			    } 
			}
