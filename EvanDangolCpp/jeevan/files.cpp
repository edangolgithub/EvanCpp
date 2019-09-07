#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int countupcase()
	{ 
ifstream fin("text.txt", ios::in);
 int count=0; 	
 char ch;
  while(!fin.eof()) 
{
  fin.get(ch); 
  if(isupper(ch)) 
  count++;
   } 
   fin.close();
   return count;
    }
    
    void countdigit()
	{
	 ifstream fil("text.TXT",ios::in); 
	 int count=0;
	  char ch; 
	  while(!fil.eof())
	   {
	     fil.get(ch); 
    if(isdigit(ch)) 
	count++; 
} fil.close(); 
string msg=count>0?"no of digits: ":"no of digit: ";
cout<<msg<<count<<endl; 
}
void drtgrrre()
{
//cout<<	countupcase();
countdigit();
}
