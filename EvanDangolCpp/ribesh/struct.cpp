#include<iostream>
using namespace std;


int main()
{
	int mem=0, rem=0, sum=0, quo=0;
	int x = 371;

	mem = x;

	while (x > 0)
	{
		rem = x % 10;
		sum = (rem*rem*rem) + sum;
		quo = x / 10;
		x = quo;
	}
	if (mem == sum)
	{
		printf("arm");
	}
	else {
		printf("na");
	}




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