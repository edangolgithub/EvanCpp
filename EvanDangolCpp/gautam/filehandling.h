#pragma once
#include <fstream>
void write()
{
	
	fstream file3;
	file3.open("person.txt", ios::out);
	file3 << "my name is not aryal. it is my suname";
	file3.close();
}
void readword()
{
	fstream file2;
	file2.open("person.txt", ios::in);
	string kl;
	int count = 0;
	while (!file2.eof())
	{
		file2 >> kl;

		cout << kl;
		count ++ ;
	}
	cout << count;
	file2.close();

}
void readchar()
{
	fstream file2;
	file2.open("person.txt", ios::in);
	char kl;
	while (!file2.eof())
	{
		file2.get(kl);

		cout << kl;
	}
	file2.close();
}

void countiword()
{
	fstream file2;
	file2.open("person.txt", ios::in);
	string kl;
	int count = 0;
	while (!file2.eof())
	{
		file2 >> kl;

		if (kl[0] == 'i')
		{
			count++;
		}
	}
	cout << count;
	file2.close();
}
void morethan4()
{
	fstream file2;
	file2.open("person.txt", ios::in);
	string kl;
	int count = 0;
	while (!file2.eof())
	{
		file2 >> kl;


		if (kl.length()>4)
		{
			count++;
		}
	}
	cout << count;
	file2.close();
}
void countline()
{
	fstream file2;
	file2.open("person.txt", ios::in);
	char line[100];
	int count = 0;
	while (!file2.eof())
	{
		file2.getline(line,sizeof(line));

		
			count++;

	}
	cout << count;
	file2.close();
}
