//#pragma once
#include<iostream>
using namespace std;
void swap(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
}
void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}
void bubblesort(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			count++;
			display(arr, 6);
			cout << endl;
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);

			}

		}

	}
	cout << endl << count;
}
void bubblesortreverse(int arr[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = size - 1 - 1; j >= 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
			display(arr, 6);
			cout << endl;
		}

	}
}
void start()
{
	int arr[] = { 26 , 21,  20,  23,  29,  17 };
	bubblesort(arr, 6);
}