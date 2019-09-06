//2  3  1  5  0 
//7  1  5  3  1 
//2  5  7  8  1 
//0  1  5  0  1 
//3  4  9  1  5

//2  3  1  5  0 
//   1  5  3  1 
//      7  8  1 
//         0  1
//            5



#include<iostream>
#include<string.h>
using namespace std;
int starthalfarray()
{
	int  A[5][6]={{2,3,1,5,0,1},{7,1,5,3,1,1},{2,5,7,8,1,1},{0,1,5,0,1,1},{3,4,9,1,5,1}};
		for(int i=0;i<=4;i++)
	{
		int sum=0;
		cout<<endl<<"row "<<i+1 <<endl;
		for(int j=0;j<=5;j++)
		{
			sum=sum+A[i][j];
	  cout<<"Array "<<"["<<i<<"]" <<"["<<j<<"] ="<<A[i][j]<<endl;
		}
		cout<<"sum of row "<<i+1 <<" is " ;
			cout<<sum<<endl;
	}
}

int halfarray()
{
	int arr[5][5]={{2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5}};
	
	for(int i=0;i<=4;i++)
	{
		switch(i)
			{
				case 0:
					cout<<"";
					break;
				case 1:
					cout<<"  ";
					break;
				case 2:
					cout<<"    ";
					break;
				case 3:
					cout<<"      ";
					break;
				case 4:
					cout<<"        ";
					break;				
			}
	
		for(int j=i;j<=4;j++)
		{
			
			
			cout<<arr[i][j]<<" ";
	
		}
	
		cout<<endl;
		
	}
	
}



