#include<iostream>
#include<fstream>
using namespace std;

void ertgre()
{
	fstream file("lines.txt",ios::in|ios::app);
	int blankspace=0;
	char st[100];
	int count=0;
	while(!file.eof())
	{
		
		file.getline(st, 100);
	    count++;
	    cout<<" tell put:";
	    cout<<file.tellp();
	    cout<<" tell get:";
		cout<<file.tellg();
		cout<<" item:"<<st<<endl;
		cout<<"....................."<<endl;
		
	}
	cout<<"count of lines : "<<count<<endl;
}
