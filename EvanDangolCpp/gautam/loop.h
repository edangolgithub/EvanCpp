#pragma once
int loop()
{

	for (int i = 1; i < 10; i++)
	{

	}
	int a = 1;

	while (a < 10)
	{
		cout << a;
		a++;
	}
	a = 1;

	do {
		cout << a;
		a++;
	} while (a < 10);
	cout << endl;

	a = 10;
	while (a > 0)
	{
		if (a % 2 == 1)
		{
			cout << a << endl;
		}
		a--;
	}
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;


}