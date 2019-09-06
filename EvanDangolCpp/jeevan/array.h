#include <iostream>

 using namespace std; 
 
 void repeatrow(int A[][4],int R, int C) 
 {
 	for(int i=0;i<R;i++)
 	{
 		int x=A[i][i];
 		for(int j=i+1;j<C;j++)
 		{
 			A[i][j]=x;
		 }
	 }
	 
	 for(int i=0;i<R-1;i++)
 	{
 		
 		for(int j=0;j<C;j++)
 		{
 		cout<<A[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
 void arrayswap(int A[],int size)
 {
 	int temp,i,length;
 	length=size-1;
 		 
	 for(i=0;i<size;i++)
 	{
 		cout<<A[i];
 	}
 	cout<<endl;
 	for(i=0;i<size/2;i++)
 	{
 		if( A[i]%2==1 || A[length-i]%2==1)
 		{
 			int temp=A[i];
 			A[i]=A[length-i];
 			A[length-i]=temp;
		 }
	 }
	 
	 for(i=0;i<size;i++)
 	{
 		cout<<A[i];
 	}
 }
 void runarray()
 {
 	int A[]={5, 16, 4, 7, 19, 8, 2 };
 	int A1[][4]={{5,6,10,2},{2,6,9,12},{18,14,5,6}};
 //	arrayswap(A,7);
 repeatrow(A1,4,4);
 }
