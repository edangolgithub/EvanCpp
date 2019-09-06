#include <iostream>
#include <cstdlib>
#include <ctime>
#define null 0
const int LIMIT =4;
 using namespace std; 
 void random1()
 {
	 
	 srand(static_cast<unsigned int>(time(NULL)));
	 int Points;
	 Points = 100 + rand() % LIMIT;    // 0 ->3  //points -> 100-> 103
	 for (int P = Points; P >= 100; P--)     
		 cout << P << '#';   
	 cout << endl;
 
 }
 
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
 void randomrun() 
 { 
 int Guess; 
 int New;
 //randomize(); 
 
 srand(static_cast<unsigned int>(time(NULL)));       // replace randomize();
 cin>>Guess; 
 for (int I=1;I<=4;I++)
  {
  // New=Guess+random(I); 
   New = Guess + rand() % I+1 ;    //  replace random()

   cout<<(char)New; 
   } 
   
   random2();
   
}
 void runrandom()
 {
	 srand(static_cast<unsigned int>(time(NULL)));
	 int X[4] = { 100, 75, 10, 125 };
	 int Go = rand() % 2 + 2;  
	 for (int i = Go; i < 4; i++)
		 cout << X[i] << "$$";
 }
 void	randomfunc()
 {
	 //randomize(); 
	 srand(static_cast<unsigned int>(time(NULL)));
	 int	A[4], C;
	 for (C = 0; C < 4; C++)
		 A[C] = rand() % (C + 1) + 10;
	 for (C = 3; C >= 0; C--)
		 cout << A[C] << "@";

	 //10 --10/11-- 10/11/12-- 10/11/12/13
	 //[10/11/12/13,10/11/12,10/11,10] only i & 4
 }

 void random3()
 {
	 srand(time(null));

	 int num= (rand() % 3) +2;  //min val=2  max val=4 
	 char guess[] = "ABCDEFGHIJK";
	 for (size_t i = 1; i <= num; i++)
	 {
		 for (size_t j = num; j <=7; j++)
		 {
			 cout << guess[j];
		 }
		 cout << endl;
	 }
	
}