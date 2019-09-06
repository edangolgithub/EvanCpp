#include<iostream>
#include<fstream>
using namespace std;

void blank()
{
	fstream file("notes.txt",ios::in);
	int blankspace=0;
	char ch;
	int count=0;
	while (!file.eof())
	{
		file.get(ch);
		
			cout << ch;
		
	}
	cout << count << endl;
	file.clear();
	file.seekg(0,ios::beg);
	while(!file.eof())
	{
		file.get(ch);
		if(ch==' ')
		{
			count++;
		}
		

		
	}
	cout<<count<<endl;
}
