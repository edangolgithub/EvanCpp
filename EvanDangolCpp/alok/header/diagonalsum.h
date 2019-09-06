#pragma once
#include "evan.h"

void startdiagonalsum()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int d1sum = 0;
	int d2sum = 0;
	int size = 3;
	int i, j;


	for (i = 0; i < size; ++i)
		for (j = 0; j < size; ++j)
		{
			if (i == j)
			{
				d1sum += a[i][j];
			}
			if (i + j == (size - 1))
			{
				d2sum += a[i][j];
			}
		}

	cout << "\nSum of 1st diagonal is " << d1sum;
	cout << "\nSum of 2nd diagonal is " << d2sum;


}