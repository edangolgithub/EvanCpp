#pragma once
#include<iostream>
#include<fstream>

using namespace std;




void write()
{
	fstream file;

	file.open("birat.txt", ios::app);

	file << "balon d'or ronaldo" << endl;
	file.close();
}

void read()
{
	fstream file;
	file.open("birat.txt", ios::in);
	char mem[100];
	char x;
	
	/*while (file >> mem)
	{
		cout << mem;
	}*/

	while (file.get(x))
	{
		cout << x;
	}
	file.close();
}
