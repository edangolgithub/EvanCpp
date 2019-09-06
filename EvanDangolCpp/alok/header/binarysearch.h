#pragma once
#include<iostream>
using namespace std;
void runbinarysearch()
{
	int arr[] = { 3, 4, 7, 11, 18, 29, 45, 71, 87, 89, 93, 96, 99 };
	int low = 0;
	int high = 12;
	int mid;
	int s = 870;
	int found = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (arr[mid] > s)
		{
			high = mid - 1;
			
		}
		else if (arr[mid] < s)
		{
			low = mid + 1;
			
		}
		else
		{
			cout << "item found at index " << mid<<endl;
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		cout << "not found" << endl;
	}
}
