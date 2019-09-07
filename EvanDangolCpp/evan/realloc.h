#pragma once
#include "student.h"

namespace evan {
	void read()
	{
		student *s = (student *)malloc(sizeof(student));
		student ss;
		fstream f("student.txt", ios::binary | ios::in);
		int count = 0;
		while (f.read((char*)&ss, sizeof(student)))
		{
			s = (student *)realloc(s, sizeof(student)*(count + 1));
		
			s[count] = ss;


			count++;
		}

		for (int i = 0; i < count; i++)
		{
			cout << s[i].name << endl;
		}

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

			cin.getline(s.name, 50); //cin >> s.name;


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
	void readchar()
	{
		//char *c = (char *)malloc(sizeof(char));
		char c;
		fstream f("a.txt", ios::in);
		int count = 0;
		char *text = (char*)malloc(sizeof(char));
		char x[26];
		while (f.get(c))
		{
			text = (char*)realloc(text, sizeof(char)* count + 1);
			text[count] = c;
			x[count] = c;


			count++;

		}

		cout << text;
		f.close();


		_getch();
	}


	void run()
	{
		read();

	}

}
