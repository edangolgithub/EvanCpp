#include<iostream>
 #include<conio.h> 
 using namespace std;
typedef int Num; 
//Typedef should be written as typedef 
Num full=100;  
 Num Calc(int X) 
 {
  full=(X>2)?1:2; 
  return (full%2);
   //; is missing 
   } 
void rrerrtrt() 
{
 int full=1000; 
 //full=Calc(::full); 
 cout<<::full<<" ::"<<full<<endl;
  } 
