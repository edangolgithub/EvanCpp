#pragma once


#define  MAX(Number) 10*Number

class PRODUCT
{
public:
	int PCode; char PName[20];

	void Entry(); void Disp();
};

void write()
{

	fstream In;
	In.open("PRODUCT.DAT", ios::binary | ios::app);
	PRODUCT p;
	p.PCode = 1;
	strcpy(p.PName, "hello");
	In.write((char*)&p, sizeof(p));
	In.close();
}
void runpro()
{
	fstream In;
	In.open("PRODUCT.DAT", ios::binary | ios::in);
	PRODUCT P;
	In.seekg(0, ios::end);
	cout << In.tellg() << endl;
	cout << sizeof(P) << endl;
	cout << "Total Count: " << In.tellg() / sizeof(P) << endl;
	In.seekg(70 * sizeof(P));
	cout << In.tellg() << endl;
	In.read((char*)&P, sizeof(P));
	In.read((char*)&P, sizeof(P));
	cout << "At Product:" << In.tellg() / sizeof(P) + 1;
	In.close();
}

class WORKER
{
public:
	int WID;
	char Name[20];
	float Salary;


	float GetSal()
	{
		return Salary;
	}
	void write()
	{
		WORKER w;
		fstream f;
		f.open("salary.DAT", ios::binary | ios::app);
		w.WID = 1;
		strcpy(w.Name, "ram");
		w.Salary = 100;
		f.write((char*)&w, sizeof(w));
	}
	void read()
	{
		fstream f;
		WORKER w;
		f.open("salary.DAT", ios::binary | ios::in);
		long sumsal = 0;
		while (f.read((char*)&w, sizeof(w)))
		{
			sumsal += w.Salary;



		}
		cout << sumsal;
	}
};
int istriangle(int a, int b, int c)
{
	int d = a + b + c;

	if (d == 180)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void evenodd()
{
	int number;
	printf("Please enter a number ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("It is even number");
	}
	else
	{
		printf("It is odd number");
	}



}
void countaanthe()
{
	ifstream f;
	f.open("texts/a.txt", ios::in);
	char ch[10];
	int c = 0;
	while (!f.eof())
	{
		f >> ch;
		if (strcmpi(ch, "the") == 0)
		{
			c++;
		}
		if (strcmpi(ch, "a") == 0)
		{
			c++;
		}
		if (strcmpi(ch, "an") == 0)
		{
			c++;
		}

	}
	f.close();
	cout << c;
}
void cbse20172()
{
	int Num, NewNum;
	cout << "Number:";
	cin >> Num;
	if (Num < 10)
		NewNum = MAX(Num);
	else
		NewNum = Num - 2;
	cout << "New Number:" << NewNum << endl;
}

void Decider(int &K, int L = 70)
{
	if (K > L)
		K -= L;
	else
		K += L;
}
void deciderrun()
{
	int M = 100, N = 40;
	Decider(M, N);
	cout << M << "#" << N << endl;
	Decider(M);
	cout << N << "#" << M << endl;
}
void randomizee()
{
	srand(time(NULL));
	int Low = 2 + rand() % 3, High = 5 + rand() % 3;
	char C[] = "ABCDEFGHIJ";
	for (int I = Low; I <= High; I++)
		cout << C[I];
	cout << endl;

}
