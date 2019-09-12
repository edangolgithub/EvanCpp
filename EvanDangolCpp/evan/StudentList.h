#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;
#include "student.h"
namespace evan 
{
	class StudentSeeder
	{
		fstream f;
	public:
		StudentSeeder()
		{
			remove("student.txt");

			f.open("student.txt", ios::app | ios::binary);
			student *s = (student *)malloc(sizeof(student) * 10);
			strcpy(s[0].name, "Evan");
			strcpy(s[0].roll, "1");
			s[0].cm = 90;
			s[0].mm = 90;
			s[0].sm = 95;
			strcpy(s[1].name, "Ram");
			strcpy(s[1].roll, "2");
			s[1].cm = 80;
			s[1].mm = 12;
			s[1].sm = 90;
			strcpy(s[2].name, "Shyam");
			strcpy(s[2].roll, "3");
			s[2].cm = 90;
			s[2].mm = 90;
			s[2].sm = 90;
			strcpy(s[3].name, "Hari");
			strcpy(s[3].roll, "4");
			s[3].cm = 90;
			s[3].mm = 90;
			s[3].sm = 90;
			strcpy(s[4].name, "Rita");
			strcpy(s[4].roll, "5");
			s[4].cm = 87;
			s[4].mm = 67;
			s[4].sm = 90;
			strcpy(s[5].name, "Sita");
			strcpy(s[5].roll, "6");
			s[5].cm = 90;
			s[5].mm = 45;
			s[5].sm = 90;
			strcpy(s[6].name, "gita");
			strcpy(s[6].roll, "7");
			s[6].cm = 90;
			s[6].mm = 45;
			s[6].sm = 90;
			strcpy(s[7].name, "Alpha");
			strcpy(s[7].roll, "8");
			s[7].cm = 10;
			s[7].mm = 90;
			s[7].sm = 90;
			strcpy(s[8].name, "Omega");
			strcpy(s[8].roll, "9");
			s[8].cm = 90;
			s[8].mm = 10;
			s[8].sm = 90;
			strcpy(s[9].name, "Zeta");
			strcpy(s[9].roll, "10");
			s[9].cm = 12;
			s[9].mm = 90;
			s[9].sm = 90;
			for (int i = 0; i < 10; i++)
			{
				f.write((char*)&s[i], sizeof(student));
			}
			f.close();
		}


	private:

	};
	
	class StudentList
	{
	private:
		int numofstudents;
		int readallready = false;
		student* s = (student*)malloc(sizeof(student));

		int CheckExist(char* roll)
		{
			int count = 0;
			while (count < numofstudents)
			{
				if (_strcmpi(roll, s[count].roll) == 0)
				{
					return 1;
				}
				count++;
			}
			return 0;
		}
		student *GetNewStudent()
		{
			student ss;
			cout << "enter name of student" << endl;

			cin.getline(ss.name, 50); //cin >> s.name;


			cout << "enter roll of student" << endl;

			cin.getline(ss.roll, 50);
			
				
			
			

			cout << "enter name of comp" << endl;
			cin >> ss.cm;

			cout << "enter name of scins" << endl;
			cin >> ss.sm;

			cout << "enter name of ma" << endl;
			cin >> ss.mm;
			return &ss;
		}
		void ReadStudentData()
		{
			numofstudents = 0;
			student ss;
			fstream f("student.txt", ios::binary | ios::in);
			int count = 0;
			while (f.read((char*)& ss, sizeof(student)))
			{
				s = (student*)realloc(s, sizeof(student) * (count + 1));

				s[count] = ss;
				count++;
			}
			numofstudents = count;
			if (numofstudents > 0)
			{
				readallready = 1;
			}
			f.close();
		}
		void ReinitializePointer()
		{
			int count = numofstudents;
			while (count > 0)
			{
				s--;
				count--;
			}
		}

		void SearchStudent(const char* name = "", const char* roll = "")
		{
			int count = 0;
			int valid = 0;
			if (strcmp(name, "") == 0)
			{
				while (count < numofstudents)
				{
					if (_strcmpi(roll, s[count].roll) == 0)
					{
						valid = 1;
						DisplayStudent(s[count], count);
					}

					count++;
				}
				if (valid != 1)
				{
					cout << "no records found" << endl;
				}
			}
			else
			{
				while (count < numofstudents)
				{
					if (_strcmpi(name, s[count].name) == 0)
					{
						valid = 1;
						DisplayStudent(s[count], count);
					}

					count++;
				}
				if (valid != 1)
				{
					cout << "no records found" << endl;
				}
			}
		}
		void DisplayStudent(student st, int count)
		{
			char pf[10] = "";
			char name[50];
			strcpy(name, st.name);
			char roll[50];
			strcpy(roll, st.roll);
			float math = st.mm;
			float compter = st.cm;
			float sciens = st.sm;
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
			cout << "math mark :" << math << "   ";
			cout << "computer mark :" << compter << "   ";
			cout << "Science mark :" << sciens << "    " << endl;
			cout << "Total Mark :" << total << "     " << endl;
			cout << "percentage :" << perc << "% " << endl;
			cout << "Result :" << pf << endl;
			cout << endl << "---------------------------------" << endl;
			count++;

		}
		void WriteStudentdata(student ss)
		{
			
			fstream f;
			f.open("student.txt", ios::app | ios::binary);		
			f.write((char*)& ss, sizeof(student));
			f.close();
		}
		void displayresult()
		{
			if (readallready != 1)
			{
				ReadStudentData();
			}
			int count = 0;

			while (count < numofstudents)
			{
				cout << s->name;
				s++;
				count++;
			}
			ReinitializePointer();
		}
		void UpdateOrDeleteStudent(char* roll, int update = 0)
		{

			student ss;
			fstream f("student.txt", ios::binary | ios::in|ios::out);
			fstream fout("tmp.txt", ios::binary | ios::out);
			if (update == 0)
			{
				while (f.read((char*)& ss, sizeof(student)))
				{

					if (_strcmpi(roll, ss.roll) == 0)
					{

					}
					else
					{
						fout.write((char*)& ss, sizeof(student));
					}
				}
				
				
			}
			else
			{
				while (f.read((char*)& ss, sizeof(student)))
				{

					if (_strcmpi(roll, ss.roll) == 0)
					{
						student ustudent = *GetNewStudent();						
						fout.write((char*)&ustudent, sizeof(student));
					
					}
					else
					{
						fout.write((char*)& ss, sizeof(student));
					}
					
				}
				
			}
			f.close();
			fout.close();
			int x = remove("student.txt");
			int y = rename("tmp.txt", "student.txt");
			ReadStudentData();			
		}
	public:
		void AddStudent()
		{
			ReadStudentData();
			try {
				student ss;
				char ch;
				do {

					ss = *GetNewStudent();
					if (CheckExist(ss.roll) == 1)
					{
						cout << "roll exists";
						throw "error";
					}

					WriteStudentdata(ss);


					cout << "thapne?" << endl;
					cin >> ch;
					cin.ignore();
				} while (ch != 'n');
			}
			catch (exception ex)
			{
				cout << ex.what();
			}
			
		}

		
		void SearchResult()
		{
			if (readallready != 1)
			{
				ReadStudentData();
			}
		
			
			cout << "search by roll or name?? n/r" << endl;
			char ch;
			cin >> ch;
			switch (ch)
			{
			case 'n':				
				char name[50];
				cout << "input name" << endl;
				cin >> name;
				SearchStudent(name);
				break;
			case 'r':
				char roll[50];
				cout << "input roll" << endl;
				cin >> roll;
				SearchStudent("",roll);
				break;

			default:
				cout << "you are searching by name"<<endl;
			//	char name[50];
				cout << "input name" << endl;
				cin >> name;
				SearchStudent(name);
				break;
			}

		}

		void RemoveStudent()
		{
			cout << "enter roll no to delete" << endl;
			char roll[50];
			cin >> roll;
			student ss;
			strcpy(ss.roll, roll);
			UpdateOrDeleteStudent(roll);
		}
		void UpdateStudent()
		{
			cout << "enter roll no to update" << endl;
			char roll[50];
			cin >> roll;
			student ss;
			strcpy(ss.roll, roll);
			cin.ignore();
			UpdateOrDeleteStudent(roll,1);
		}
		void GetResults()
		{
			if (readallready != 1)
			{
				ReadStudentData();
			}
			
			int count = 1;
			for (int i = 0; i < numofstudents; i++)
			{
				DisplayStudent(s[i], count);
				count++;
			}
			
		}
	
		void menu()
		{
			cout << "Student Result System" << endl<<endl;
			char ch;
			do {
				
				cout << "Enter 1 for adding student\nEnter 2 for result display\nEnter 4 for result search" <<
						"\nEnter 5 for updating student \nEnter 6 for deleting student" <<
						"\nEnter 7 for seeding student" <<
						"\nEnter'q' for quit" << endl;
				cin >> ch;
				switch (ch)
				{
				case '1':
					cin.ignore();
					AddStudent();
					break;
				case '2':
					system("cls");
					GetResults();
					break;
				case '4':
					SearchResult();
					break;
				case '5':
					
					UpdateStudent();
					break;
				case '6':
					
					RemoveStudent();
					break;
				case '7':
					SeedStudents();
					break;
				case 'q':
					exit(0);
					break;
				default:
					cout << "incorrect input";
					break;
				}
				
				
			} while (ch != 'q');

		}
		

		void SeedStudents()
		{
			
			StudentSeeder sss;

        }
		void run()
		{
			menu();
		}
		
	};
	

}