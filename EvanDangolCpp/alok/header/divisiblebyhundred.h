#pragma once
void Showhundred(int T[4][4])
{

	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 4; j++)
		{
			
			if (T[i][j] % 100 == 0)
			{
				cout << T[i][j] << endl;
			}
			
		}
	}
}

void startdivisiblebyhundred()
{
	int a[4][4] = { 41,12,300,44,10,60,75,82,91,43,120,65,72,400,22,56 };
	Showhundred(a);
}