#pragma once
void whileloop()
{
	int i = 0;
	while (i < 10)
	{
		printf("%d\n",i);
		i++;
	}
}
void forloop()
{
	 
	for (int i=0; i < 10; i++)
	{
		printf("%d", i);
	}
 }

void doloop()
{
	int i = 0;
	do
	{
		printf("The value of variable i is: %d", i);
		i++;
	} while (
		i < 10
		);

}

void reversenum()
{
	int i = 10;
	while (i>0)
	{
		printf("%d", i);
		i--;

	}
}

void onlyeven()
{

	int i = 0;
	while (i < 10)
	{
		if (i%2==0)
		{


			printf("%d\n", i);
		}

		i++;
	}
}
 
void cubeseries(int n)
{
	for (int i=0; i<=n; i++)
	{
		printf("%d\n", i*i*i);
	}
}

void squareseries(int n)
{
	for (int i = 0; i <= n; i++)
	{
		printf("%d\n", i*i);
	}
}

void seriesone()
{
	int a = 1;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a);
		a = a + 3;

	}
}

void series2()
{
	int a = 1;
	int b = 2;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a);
		a = a + b;
		b++;
	}
}

void series3()
{
	int sum = 0;
	int c = 0;
	int x= 1;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", c);
		sum = sum + c;
		c = c + x;
		x++;

	}
}


