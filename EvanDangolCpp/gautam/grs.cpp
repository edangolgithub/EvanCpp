#pragma once
#include<iostream>
#include <fstream>
#include<string>
#include<vector>
using namespace std;
class student
{
public:
	char roll[50] ;
	char name[50];
	float sm;
	float cm;
	float mm;



};

class StudentResult
{
public:
	vector<student> slist;

	
	void search()
	{
		int count = 0;
		slist.clear();
		readdata();
		cout << "search by roll or name?? n/r" << endl;
		char ch;
		cin >> ch;
		switch (ch)
		{
		case 'n':
			count = 1;
			char name[50];
			cout << "input name" << endl;
			cin >> name;

			
			for (int i = 0; i < slist.size(); i++)
			{
				if (_strcmpi(name, slist[i].name)==0)
				{
					string pf = "";
					string name = slist[i].name;
					string roll = slist[i].roll;
					float math = slist[i].mm;
					float compter = slist[i].cm;
					float sciens = slist[i].sm;

					float total = math + compter + sciens;
					float perc = total / 3;
					if (total < 150)
					{
						pf = "Fail";
					}
					else
					{
						pf = "Pass";
					}
					cout << endl << "---------------------------------" << endl;
					cout << endl << "Student " << count << endl;
					cout << endl << "---------------------------------" << endl;
					cout << "student name :" << name << endl;
					cout << "roll :" << roll << endl;
					cout << "math mark :" << math << "   ";
					cout << "computer mark :" << compter << "   ";
					cout << "Science mark :" << sciens << "    " << endl;
					cout << "Total Mark :" << total << "     " << endl;
					cout << "percentage :" << perc << "% " << endl;
					cout << "Result :" << pf << endl;
					cout << endl << "---------------------------------" << endl;
					count++;
				}
			}

			break;
		case 'r':
			break;
			
		default:
			cout << "you are searching by name";
			break;
		}

	}
	void displayresult()
	{
		slist.clear();
		readdata();
		int count = 1;
		for (int i = 0; i < slist.size(); i++)
		{
			string pf = "";
			string name = slist[i].name;
			string roll = slist[i].roll;
			float math = slist[i].mm;
			float compter = slist[i].cm;
			float sciens = slist[i].sm;

			float total = math + compter + sciens;
			float perc = total / 3;
			if (total < 150)
			{
				pf = "Fail";
			}
			else
			{
				pf = "Pass";
			}
			cout << endl << "---------------------------------" << endl;
			cout << endl << "Student " <<count<< endl;
			cout << endl << "---------------------------------" << endl;
			cout << "student name :" << name <<endl;
			cout << "roll :" << roll<<endl;
			cout << "math mark :" << math<<"   ";
			cout << "computer mark :" << compter<<"   ";
			cout << "Science mark :" << sciens<<"    "<<endl;
			cout << "Total Mark :" << total<<"     "<<endl;
			cout << "percentage :" << perc<<"% "<<endl;
			cout << "Result :" << pf << endl;
			cout << endl << "---------------------------------" << endl;
			count++;
		}
	}

	void readdata()
	{
	
		student s;
		fstream f;
		f.open("student.txt", ios::in | ios::binary);
		while (f.read((char*)&s, sizeof(s)))
		{
			slist.push_back(s);
		}
		/*for (student s : slist)
		{
			cout << s.name << endl;
		}*/

		
		f.close();

	}
	void writedata()
	{
		student s;
		fstream f;
		f.open("student.txt", ios::app | ios::binary);
		char ch;
		do {
			
			cout << "enter name of student" << endl;
		
			cin.getline(s.name,50); //cin >> s.name;
			

			cout << "enter roll of student" << endl;
			
			cin.getline(s.roll, 50);

			cout << "enter name of comp" << endl;
			cin >> s.cm;

			cout << "enter name of scins" << endl;
			cin >> s.sm;

			cout << "enter name of ma" << endl;
			cin >> s.mm;

			
			f.write((char*)&s, sizeof(s));

			cout << "thapne?" << endl;
			cin >> ch;
			cin.ignore();
		} while (ch != 'n');
		f.close();
	}
};

void ht()
{
	StudentResult sr;
	char ch;
	do
	{
		cout << "press 1 for adding new student 2 for result 3 for searching result q for quit" << endl;
		cin >> ch;
		
		switch (ch)
		{
		case '1':
			cin.ignore();
			sr.writedata();
			break;
		case '2':
			sr.displayresult();
			break;
		case '3':
			sr.search();
			break;
		case 'q':
			exit(0);
		default:
			cout << "choose properly" << endl;
			break;
		}
	} while (ch != 'q');
}