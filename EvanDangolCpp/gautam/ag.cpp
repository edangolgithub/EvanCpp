#include <iostream>
using namespace std;

  int hcf(int a,int b)
  {
  	int h=1;
  	
  	for(int i=1;i<=a;i++)
  	{
  		if(a%i==0 && b%i==0)
  		{
  			h=i;
		  }
	  }
  	return h;
  }
  

void ew2r()
{
	int a=345252;
	int b=3453;
	
	cout<<hcf(a,b)<<endl;
	cout<<(a*b)/hcf(a,b);
}
      
	
