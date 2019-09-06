 #include<cstring>
 #include<iostream>
 using namespace std;

void qb1() 

{ 

char Txt[] = "Welcome"; 

for(int C= 0; C<strlen(Txt); C++) 

Txt[C] = Txt[C]+1; 

cout<<Txt<<endl; 

} 

void qc1() 

{ 

char CH;
cout<<"Enter an Alphabet:";
 cin>>CH;

 switch(CH)
{

case 'A': 
cout<<"Ant";
 break;
  case'B':
   cout<<"Bear" ;
    break; 
	}



} 

#define Diff(N1,N2) ((N1>N2)?N1-N2:N2-N1) 
void q4() {

int A,B,NUM[] = {10,23,14,54,32}; 
for(int CNT =4; CNT>0; CNT--) {
A=NUM[CNT];
B=NUM[CNT-1]; 
cout<<Diff(A,B)<<'#';
 }
  }

void q5() 
 {
    int *Point, Score[]={100,95,150,75,65,120}; 
	  Point = Score; 
	  
	    for(int L = 0; L<6; L++)
		   {   
		   if((*Point)%10==0)
		   {		   
		      *Point /= 2;
		   }
		   else
		   {			  
		   *Point -= 2;
		   }
		   
		   if((*Point)%5==0)
		   {		   
			*Point /= 5;
		   }
		   cout<<*Point<<endl;
		Point++;  
		   }
	 for(int L = 5; L>=0; L--)  
		 cout<<Score[L]<<"*";  
		
		} 
#include <stdlib.h>
#include<time.h>
int randomfunc()
{
srand(time(NULL));
int num,i;

     for(i=0;i<5;++i)
     {

          num=rand();

          cout<<num<<endl;

     }

}
void q6()  
{
   srand(time(NULL));
      int N=rand() %3 +1,M=rand() %4 +1; 
	    int DOCK[3][3] = {{1,2,3},{2,3,4},{3,4,5}};  
  for(int R=0; R<N; R++)  
   {
      for(int C=0; C<M; C++)
	  {
		    cout<<DOCK[R][C]<<" ";
	  }
	  cout<<endl;
   }
}

const int NUM=5;
void q7() {
 srand(time(NULL)); 
 int V1=1, V2=5,
  Pick;
   while(V1<V2) 
   { 
   Pick=rand() %NUM+ (V2-V1);
    cout<<Pick<<" : ";
	 V1++;
	 }
	  } 
void wte()
{
	q7();
}

//http://www.cppforschool.com/papers.html
