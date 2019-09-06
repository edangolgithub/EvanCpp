#include <iostream>
#include <cstdlib>
#include <ctime>


 using namespace std; 
 
 
 void random2()
 {
 	char city[][4]={"PKD", "EKM", "TVM", "KOL", "CAL"};
	  int ZEN;
	   for(int i=0;i<3;i++); { 
	  //ZEN=random(2)+1;
	  ZEN=rand() % 2+1;
	   cout<<city[ZEN]<<"@"; 
 }
}
 void rtye() 
 { 
 int Guess; 
 int New;
 //randomize(); 
 
 srand(time(NULL));       // replace randomize();
 cin>>Guess; 
 for (int I=1;I<=4;I++)
  {
  // New=Guess+random(I); 
   New = Guess + rand() % I+1 ;    //  replace random()

   cout<<(char)New; 
   } 
   
   random2();
   
}
