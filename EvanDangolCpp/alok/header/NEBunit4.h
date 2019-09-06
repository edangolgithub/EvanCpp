#pragma once

void q1(int z)
{
	for (int j = 1; j <= z; j++)
	{


		for (int i = 1; i <= 10; i++)
		{
			printf("%d X %d = %d\n", j, i, i * j);
		}
	}
}
void q2strcat()
{
	char c[50] = "ribesh";
	char d[50] = "evan";

	strcat(c, d);
	printf(c);
}

void q2strcpy()
{
	char d[50];
	char c[50];
	//c= "ribesh";
	strcpy(c, "ribesh");

	strcpy( d,c );// destination should be written before source
	printf(d);
}

void q2strlength()
{
	int len;
	char str[] = "ribesh";
	len = strlen(str);
	printf("%s %d",str, len);

}

//Write a program to find greatest number among four numbers.[10]

void greatestnum()
{
	int a;
	int b;
	int c;
	int d;

	printf("please give value of four numbers");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	
}

void time()
{
	int second;
	int hour, minute;
	int scnd;
	printf("Give second");
	scanf("%d", &second);

	hour = second / 3600;
	minute = second / 60;
	scnd = second % 60;

	printf("Hour=%d : Minute=%d : Second=%d ", hour, minute, scnd);
	
}




