#pragma once
#include<iostream>
#include<fstream>
//#include<stdlib.h>
#include<conio.h>
using namespace std;
typedef	int a;

int arr[] = { 5,3,6,1,8 };
#pragma region MyRegion
void showlarge(int a, int b)
{
	int diff = 0;
	if (a > b)
	{
		diff = a - b;
		cout << a << " is larger by " << diff << " units than smaller number" << endl;
	}
	else if (b > a)
	{
		diff = b - a;
		cout << b << " is larger by " << diff << " units than smaller number" << endl;
	}
	else
	{
		cout << "These numbers are equal";
	}
}
struct tanks
{
	char nameoftank[20];
	float kilometerdriven;
	float gallons;
};
void calculatemiles()
{
	float sumkilo = 0;
	float sumgallons = 0;
	float sumaverage = 0;

	struct tanks tank1;
	strcpy(tank1.nameoftank, "tank1");
	tank1.kilometerdriven = 50;
	tank1.gallons = 10;


	struct	tanks tank2;
	strcpy(tank2.nameoftank, "tank2");
	tank2.kilometerdriven = 100;
	tank2.gallons = 45;

	struct	tanks tank3;
	strcpy(tank3.nameoftank, "tank3");
	tank3.kilometerdriven = 487;
	tank3.gallons = 100;

	tanks t[] = { tank1,tank2,tank3 };

	//cout << sizeof(tank1)<<endl;
	for (int i = 0; i < 3; i++)
	{
		sumkilo = t[i].kilometerdriven + sumkilo;
		sumgallons = t[i].gallons + sumgallons;
		float average = t[i].kilometerdriven / t[i].gallons;
	    sumaverage = sumaverage + average;
		cout << average << endl;
	}
	cout << "for all " << sumaverage / 3 << endl;
}
//r gallon obtained for all tanks is 4.03074
void kmgallon() {
	//clrscr();
	int tanks = 0;
	float tot_km=0;
	float avg_k_p_g;
	cout << "Enter how many tanks filled :";
	cin >> tanks;
	float *kms = new float[tanks];
	float *gallons_used = new float[tanks];
	float *k_p_g = new float[tanks];
	for (int i = 0; i < tanks; i++) {
		cout << "Enter how much kilometers covered for tank " << i + 1 << " ";
		cin >> kms[i];
		cout << "Enter how much gallon used from tank " << i + 1 << " ";
		cin >> gallons_used[i];
		k_p_g[i] = kms[i] / gallons_used[i];
		cout << "KMs per Gallon obtained for tank No. " << i + 1 << " " << k_p_g[i] << endl;
		tot_km += k_p_g[i];
		cout << endl;
	} 
	avg_k_p_g = tot_km / tanks;
	cout << "Average kilometers per gallon obtained for all tanks is " << avg_k_p_g;
	getch();
}
int sumarray(int arr[],char val)
{
	int sum = 0;
	switch (val)
	{
	case 'e':
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] % 2 == 0)
			{
				sum = sum + arr[i];
			}
		}
		return sum;
		
	case 'o':
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] % 2 == 1)
			{
				sum = sum + arr[i];
			}
		}
		return sum;
	
	default:
		return 0;
		
	}
	
}
void sumarrayrun()
{
	cout<<sumarray(arr, 'e');
}
#pragma endregion

void Position(int &C1, int C2 = 3)
{
	C1 += 2;
	C2 += 1;
}

void runposition()
{
	int P1 = 20, P2 = 4;
	Position(P1);
	cout << P1 << ", " << P2 << endl;
	Position(P2, P1);
	cout << P1 << ", " << P2 << endl;
}
void Withdef(int HisNum = 30)
{
	for (int I = 20; I <= HisNum; I += 5)
		cout << I << " ";
	cout << endl;
}
void Control(int &MyNum)
{
	MyNum += 10;
	Withdef(MyNum);
}
void runwithdef()
{
	int YourNum = 20;
	Control(YourNum);
	Withdef();
	cout << "Number = " << YourNum << endl;
}
#pragma region encrypt

void Encrypt(char *S, int key)
{
	char *Temp = S;

	if (key % 2 == 0)
	{
		key--;
		//cout << key;
	}
	while (*Temp != '\0')
	{
		*Temp += key;

		Temp += key;
		//cout<<Temp<<endl;
	}
	//cout << *Temp << endl;
}


void runencrypt()
{

	int Key_Set[] = { 1, 2 ,3 };
	char Pvt_Msg[] = "Computer2017";
	for (int C = 0; C<=2; C++)
	{
	Encrypt(Pvt_Msg, Key_Set[C]);
	cout <<"New Encrypted Message after Pass "<<C+1<<" is :"<<Pvt_Msg;
	cout << endl;
	}



}

#pragma endregion

void Encode(char Info[], int N);

void runencode()
{
	char Memo[] = "Justnow";
	Encode(Memo, 2);
	cout << Memo << endl;
}
void Encode(char Info[], int N)
{
	for (int I = 0; Info[I] != '\0'; I++)
		if (I % 2 == 0)
			Info[I] = Info[I] - N;
		else if (islower(Info[I]))
			Info[I] = toupper(Info[I]);
		else
			Info[I] = Info[I] + N;
}
struct S
{
	char carr[10];
	int a;
	float b;
}
sa[2];  //assume that the first structure begins at address 1004 

void t()
{
	cout << sizeof(sa[0].carr) << endl;
	cout << sizeof(float) << endl;

	cout << &sa[0].carr << "-" << &sa[0].a << "-" << &sa[0].b << "\n";
	cout << &sa[1].carr << "-" << &sa[1].a << "-" << &sa[1].b << "\n";
}
void	Revert(int	&Num, int	Last = 2)
{
	Last = (Last % 2 == 0) ? Last + 1 : Last - 1;
	for (int C = 1; C <= Last; C++)
		Num += C;

}
void	runrevert()
{
	int	A = 20, B = 4;
	Revert(A, B);
	cout << A << "&" << B << endl;
	B--;
	Revert(A, B);
	cout << A << "#" << B << endl;
	Revert(B);
	cout << A << "#" << B << endl;
}

int largest3()
{
	float n1, n2, n3;

	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;

	if (n1 >= n2)
	{
		if (n1 >= n3)
			cout << "Largest number: " << n1;
		else
			cout << "Largest number: " << n3;
	}
	else
	{
		if (n2 >= n3)
			cout << "Largest number: " << n2;
		else
			cout << "Largest number: " << n3;
	}

	return 0;
}
int printprime()
{

	bool p = true;
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				p = false;
				break;
			}				
			else
			{
				p = true;
				
			}
			
		}
		if (p)
		{
			cout << i << " ";
		}
	}
	return 0;
}