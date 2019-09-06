#include<iostream>
using namespace std;

 bool IsPrime(int a)
 {
 	int rem;
 	for(int i=2;i<=a-1;i++)
 	{
 		rem=a%i;
 		if(rem==0)
 		{
 		
 			return false;
		 }
	 }
 	
 	return true;
 	
 }
   void fgjhfg()
   {
   bool primehota;
   primehota=IsPrime(3);
   
   cout<<boolalpha<<primehota<<endl;
	   	
   	system("pause");
   	
   }
