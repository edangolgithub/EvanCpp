#pragma once
#include<iostream>
using namespace std;
//
void array1()
{
	//index
	// element
	int nums[10] = { 11,2,30,4,5,6,7,8,9,10};
	nums[7] = 64;
	for (size_t i = 0; i < 10; i++)
	{
		cout << nums[i] << endl;
	}
}
void arraysum()
{
	//index
	// element
	int nums[10] = { 1,2,3,4,5,6};
	int sum = 0;
	for (size_t i = 0; i < 6; i++)
	{
		sum = sum + nums[i];
	}
	cout << sum;
}

void arraytrio()
{
	int mon[6] = { 1,2,3,4,5,6 };
	int mul =1 ;
	for (size_t i = 1; i < 7; i++)
	{
		mul = mul * mon[i];
	}
	cout << mul;
}