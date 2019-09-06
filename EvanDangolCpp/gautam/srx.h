#pragma once
#pragma once
#include<iostream>
#include <fstream>
#include<string>
using namespace std;
class student
{
public:
	string roll="";
	string name="";
	float sm=0;
	float cm=0;
	float mm=0;



};

class StudentResult
{
public:


	void displayresult()
	{

	}
	void processpassfail()
	{

	}

	void readdata()
	{
		

	}
	void writedata()
	{
		GetInput();
	}
private:
	void GetInput()
	{
		student s;
		fstream f;
		f.open("student.txt", ios::app | ios::binary);
		char ch;
		do {
			cout << "enter name of student" << endl;
			cin >> s.name;

			cout << "enter roll of student" << endl;
			cin >> s.roll;

			cout << "enter name of comp" << endl;
			cin >> s.cm;

			cout << "enter name of scins" << endl;
			cin >> s.sm;

			cout << "enter name of ma" << endl;
			cin >> s.mm;


			if (f.fail())
			{
				cout << "failed";
			}
			f.write((char*)& s, sizeof(s));
			cout << "thapne?" << endl;
			cin >> ch;
		} while (ch != 'n');
		f.close();
	}
};