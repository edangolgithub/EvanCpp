#include <iostream>
using namespace std;
// nischal le change gareko
void ew2rt5f()
{

   int a[]={3,4,5,7,6,9};
   int s;
   cout<<" enter the number to search"<<endl;
   cin>>s;
   
   int flag=3;
   int i;
 for(i=0;i<=5;i++)
 {
 	if (a[i]==s )
 	{
 		flag=3;
 		 
 		break;
 	}
  else
   {
     	flag=0;
   }    
} 
      if(flag==3)
        {     
	        cout<<s<<" is found it is in index "<<i<<endl;
        }
      else if(flag==0)
      {          
	       cout<< "not found";
      }
}

 
