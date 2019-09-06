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
 	int temp=0,i,length;
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
 void swap_row(int ARR[][3], int R, int C)
 {
	 int first[3];
	 int third[3];
	 for (int i = 0; i < R; i++)
	 {

		 for (int j = 0; j < C; j++)
		 {
			 if (i == 0)
			 {
				 first[j] = ARR[i][j];
			 }
			 if (i == 2)
			 {
				 third[j] = ARR[i][j];
			 }
		 }

	 }
	 for (int i = 0; i < R; i++)
	 {

		 for (int j = 0; j < C; j++)
		 {
			 if (i == 0)
			 {
				 ARR[i][j] = third[j];
			 }
			 if (i == 2)
			 {
				 ARR[i][j] = first[j];
			 }
		 }

	 }
	 for (int i = 0; i < R; i++)
	 {

		 for (int j = 0; j < C; j++)
		 {
			 cout << ARR[i][j];
		 }

		 cout << endl;
	 }
 }

 void grace_score() {

	 int arr[] = { 45,35,85,80,33,27,90 };
	 for (int i = 0; i < 7; i++)
	 {
		 if (arr[i] < 40)
		 {
			 arr[i] += 5;
		 }
	 }
	 for (int i = 0; i < 7; i++)
	 {
		 cout << arr[i] << ", ";
	}
	 cout << endl;
 }

 void changearray()
 {
	 int arr[] = { 55, 43, 20, 16, 39, 90, 83, 40, 48, 25 };
	 for (size_t i = 0; i < 10; i++)
	 {
		 if (arr[i] % 5 == 0)
		 { 
			 arr[i] = 5;
		 }
		 else
		 {
			 arr[i] = 0;
		 }
	 }
	 //cout << *arr;
	 for (int i = 0; i < 10; i++)
	 {
		 cout << arr[i] << ", "  ;
	 }
	 cout << endl;
 }

 void reversearray(int arr[], int size)
 {
	 for (int i = 0; i < size/2; i++)
	 {
		 int temp = arr[i];
		 arr[i] = arr[size-1 - i];
		 arr[size-1 - i] = temp;
	 }
 }
 void runreversearray()
 {
	 int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11 };
	 reversearray(arr, 11);
	 for (int i = 0; i < 10; i++)
	 {
		 cout << arr[i];
	 }
 }
 void reversestring(char arr[], int size)
 {
	 for (size_t i = 0; i < size / 2; i++)
	 {
		 int temp = arr[i];
		 arr[i] = arr[size - 1 - i];
		 arr[size - 1 - i] = temp;
	 }
 }
 void runreversestring()
 {
	 char arr[] = "hello";
	 reversestring(arr, 5);
	 for (size_t i = 0; i < 5; i++)
	 {
		 cout << arr[i];
	 }
 }
