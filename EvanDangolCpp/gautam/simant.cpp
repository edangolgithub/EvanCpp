#include<iostream>
#include<algorithm>
using namespace std;

void sortlibrary()
{
	int arr[8] = { 34,2,6,1,7,9,8,3 };
	sort(arr, arr+8);
	for (size_t i = 0; i < 8; i++)
	{
		cout << arr[i]<<endl;

	}

}
void sortlibraryreverse()
{
	int arr[8] = { 34,2,6,1,7,9,8,3 };
	sort(arr, arr + 8, greater<int>());
	for (size_t i = 0; i < 8; i++)
	{
		cout << arr[i] << endl;

	}

}

// bubble insertion selction quick merge heap 

void buuble()
{
	int arr[8] = { 34,2,6,1,7,9,8,3 };
	int temp;
	for (size_t j = 0; j < 8; j++)
	{
		for (size_t i = 0; i < 7; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		
	}
	for (size_t i = 0; i < 8; i++)
	{
		cout << arr[i] << "     ";
	}
}
void eeeew()
{
	buuble();
}