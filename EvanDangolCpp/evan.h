#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "evan/student.h"
#include<fstream>
#include<string.h>
using namespace std;

namespace evan
{
	void update()
	{
		
		student ss;
		student sx;
		strcpy(sx.name, "qqqq");
		strcpy(sx.roll, "65");
		sx.cm = 99;
		sx.mm = 98;
		sx.sm = 97;
		fstream f("student.txt", ios::binary | ios::in | ios::out);
		
		while (f.read((char*)&ss, sizeof(student)))
		{
			if (_strcmpi(ss.roll, "5") == 0)
			{
				int size = sizeof(student);
				f.seekp(-1 * size, ios::cur);
				f.write((char*)&sx, sizeof(student));
				break;
			}
		}
		
		f.close();
	}
	void DisplayStudent()
	{
		fstream f("student.txt", ios::binary | ios::in | ios::out);
		student ss;
		while (f.read((char*)&ss, sizeof(student)))
		{
			int count = 1;
			char pf[10] = "";
			char name[50];
			strcpy(name, ss.name);
			char roll[50];
			strcpy(roll, ss.roll);
			float math = ss.mm;
			float compter = ss.cm;
			float sciens = ss.sm;
			float total = math + compter + sciens;
			float perc = total / 3;
			if (total < 150)
			{
				strcpy(pf, "Fail");
			}
			else
			{
				strcpy(pf, "Pass");
			}


			cout << endl << "Student " << count << endl;
			cout << endl << "---------------------------------" << endl;
			cout << "student name :" << name << endl;
			cout << "roll :" << roll << endl;
			cout << strlen(roll) << endl;
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
}