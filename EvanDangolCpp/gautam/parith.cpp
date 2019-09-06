#include<iostream>
using namespace std;

void fff()
{
	int arr[]={100,200,300,400,500,600,700,800};
	
	int *p=arr;
///	cout<<*p;
	
//	*p=*p+4;
//	cout<<*p;

for(int i=0;i<8;i++)
{
	cout<<*p<<" -- ";
	p++;
	cout<<arr[i]<<endl;
}
cout<<endl<<endl<<endl;
p--;p--;p--;p--;
cout<<*p;



}
