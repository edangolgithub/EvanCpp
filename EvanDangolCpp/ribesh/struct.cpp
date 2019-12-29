#include<iostream>
using namespace std;


int main()
{
	int arr[10]; // 4 2 1 9 3
	for (size_t i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	for (size_t i = 0; i < 10; i++)
	{

		for (size_t j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}