#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
using namespace std;


class student
{
public:
	int studentid;
	char studentname[50];
	char roll[20];
	char grade[20];

	void addstudent()
	{
		//student s;
		cout << "studentid" << endl;

		cin >> studentid;
		cin.ignore();
		cout << "name" << endl;

		gets_s(studentname);
		cout << "roll" << endl;

		gets_s(roll);
		cout << "grade" << endl;

		gets_s(grade);

		ofstream out("student.txt", ios::out | ios::app | ios::binary);

		out.write((char *)this, sizeof(student));
		out.close();
	}
	void display()
	{
		ifstream in("student.txt", ios::in | ios::binary);
//		student s;
		cout << endl;
		while (in.read((char*)this, sizeof(student)))
		{
			cout << this->studentid << endl;
			cout << this->studentname << endl;
			cout << this->roll << endl;
			cout << this->grade << endl;
		}
		in.close();

	}
	void modifystudent()
	{
		student s;
		fstream file;
		//fstream fileout;
		file.open("student.txt", ios::binary | ios::in | ios::out);
		//fileout.open("student1.txt", ios::binary | ios::out);
		int size = sizeof(s);
		while (file.read((char*)&s, sizeof(s)))
		{

			if (_strcmpi(s.studentname, "hari") == 0)
			{
				strcpy(s.grade, "C");
				file.seekp(-size, ios::cur);
				file.write((char*)&s, sizeof(s));
				//cout << sizeof(s) << endl;
				//file.seekp(-sizeof(s), ios::cur); error unsigned int
				//cout << file.tellp();
				//cout << s.studentname;
				break;
			}
			else
			{
				//fileout.write((char*)&s, sizeof(s));
			}

		}
		file.close();


	}
};

int countupcase()
{
	ifstream fin("texts/text.txt", ios::in);
	int count = 0;
	char ch;
	while (!fin.eof())
	{
		fin.get(ch);
		if (isupper(ch))
			count++;
	}
	fin.close();
	return count;
}

void countdigit()
{
	ifstream fil("text.TXT", ios::in);
	int count = 0;
	char ch;
	while (!fil.eof())
	{
		fil.get(ch);
		if (isdigit(ch))
			count++;
	} fil.close();
	string msg = count > 0 ? "no of digits: " : "no of digit: ";
	cout << msg << count << endl;
}

class Labrecord
{
	int Expno;
	char Experiment[20];
	char Checked;
	int Marks;
public:
	//function to enter Expriment details
	void EnterExp()
	{
		
		cin >> Expno;
		cin.ignore();
	    cin.getline(Experiment,20);
		
		cin>>Checked;
		
		cin >> Marks;
		
//		writefile();
		
		
	}
	//function to display Expriment details 
	void ShowExp()
	{
		cout <<"ex"<< Expno;
		cout << "exp"; puts(Experiment);
		cout << "chk"; putchar(Checked);
		cout <<"marks"<< Marks;
		cout << endl;
	}
	//fuction to retur Expno 
	char RChecked()
	{
		return Checked;
	}
	//fuction to assign Marks 
	void Assignmarks(int M)
	{
		Marks = M;
	}
	void writefile(Labrecord l)
	{
		    
			fstream File;
			File.open("Marks.txt", ios::binary | ios::app);
			File.write((char*)&l, sizeof(l));
			File.close();
	}
	void readfile()
	{
		Labrecord l;
		fstream File;
		File.open("Marks.txt", ios::binary | ios::in | ios::out);
		while (File.read((char*)&l, sizeof(l)))
		{
			cout << "ex= " << l.Expno;
			cout << " exp= "<<l.Experiment;
			cout << " chk= "<<l.Checked;
			cout << " marks= " << l.Marks;
			cout << endl;
		}
		File.close();
	}
	void ModifyMarks()
	{
		fstream File;
		File.open("Marks.txt", ios::binary | ios::in | ios::out);
		Labrecord L;
		int Rec = 0;
		while (File.read((char*)&L, sizeof(L)))
		{
			if (L.Expno == 1)
			{
				//_____________ //statement 1 
			   // _____________ //statement 2
				L.Marks = 101010;
				int size = sizeof(L);
				File.seekg(-size, ios::cur);
				File.write((char*)&L, sizeof(L));
				break;
			}

			Rec++;
		} File.close();
	}

};

//	void wte () 
//		{
//	
//	  ofstream outfile;
//	  outfile.open ("test.txt");
//	
//	  outfile.write ("This is an apple",16);
//	  long pos = outfile.tellp();
//	  
//	  cout<<pos;
//	  outfile.seekp (pos-7);
//	  outfile.write (" sam",4);
//	
//	  outfile.close();
//	
//	  return 0;
//	}
//	 void wte () {
//  streampos begin,end;
//  ifstream myfile ("test.txt");
//  begin = myfile.tellg();
//  cout<<begin;
//  myfile.seekg (0, ios::end);
//  end = myfile.tellg();
//  cout<<end;
//  myfile.close();
//  cout << "size is: " << (end-begin) << " bytes.\n";
//  return 0;
//}

int genr() {
	
	std::ofstream outfile;
	outfile.open("test.txt");

	outfile.write("This is an apple", 16);
	streamoff pos = outfile.tellp();
	cout << pos;
	outfile.seekp(pos - 7);
	pos = outfile.tellp();
	cout << pos;
	outfile.write(" sam", 4);

	outfile.close();

	return 0;
}

void lineread()
{
	fstream file("lines.txt", ios::in | ios::app);
	int blankspace = 0;
	string st;
	int count = 0;
	while (!file.eof())
	{
		getline(file, st);

		count++;
		cout << " tell put:";
		cout << file.tellp();
		cout << " tell get:";
		cout << file.tellg();
		cout << " item:" << st << endl;
		cout << "....................." << endl;

	}
	cout << "count of lines : " << count << endl;
}
void readwords()
{
	fstream file("texts/poem.txt", ios::in | ios::app);
	int blankspace = 0;
	string st;
	int count = 0;
	int youcount = 0;
	while (!file.eof())
	{
		file >> st;
		cout << st << endl;
		count++;
		if (st == "you")
		{
			youcount++;
		}
	}
	cout << "count of words : " << count << endl;
	cout << "number of times 'you' appeared : " << youcount << endl;
}

void filehandling1()
{
	char str[] = "hello good bye";
	ofstream out("texts/a.txt", ios::out);
	out.write(str, sizeof(str));
	out.close();
	ifstream in("texts/a.txt", ios::in);
	char st;
	char s[10];
	while (!in.eof())
	{
		//st=in.get();
		in >> st;
		cout << in.tellg();
		cout << st;
		cout << endl;
	}
	in.clear();
	in.seekg(-2, ios::end);
	cout << in.tellg();
	cout << (char)in.get();
	in.seekg(0, ios::beg);
	while (!in.eof())
	{
		in >> s;
		cout << endl << endl << s;
	}
}
void runfilehandling()
{
	countdigit();
}

class stu
{
	
public:
	int rollno;
	char name[25];
	char Class[4];
	float marks;
	char grade;
	void getdata()
	{
		cin >> rollno;
		cin >> name;
		cin >> Class;
		cin >> marks;
		if (marks >= 75)
		{
			grade = 'A';
		}
		else if (marks >= 60)
		{
			grade = 'B';
		}
		else if (marks >= 50)
		{
			grade = 'C';
		}
		else if (marks >= 40)
		{
			grade = 'D';
		}
		else
		{
			grade = 'F';
		}
	}
	void putdata()
	{
		cout << rollno << endl;
		cout << name << endl;
		cout << Class << endl;
		cout << marks << endl;
		cout << grade << endl;

	}


};
void runstu1()
{
	stu st;
	ifstream fio("tem.txt", ios::in|ios::binary);
	ofstream file("temp.txt", ios::out |ios::app| ios::binary);
	/*
	st.getdata();
	file.write((char*)&st, sizeof(st));
	file.close();
	st.putdata();*/

	while (fio.read((char*)&st, sizeof(st)))
	{
		if (st.rollno == 1)
		{
			strcpy(st.name,"jackson");
			file.write((char*)&st, sizeof(st));
		}
		else
		{
			file.write((char*)&st, sizeof(st));
		}
	}
	file.close();
	fio.close();
	remove("tem.txt");
	rename("temp.txt", "tem.txt");

	fio.open("tem.txt", ios::in);
	while (fio.read((char*)&st, sizeof(st)))
	{
		st.putdata();
	}
	fio.close();
}
void runstu()
{
	stu st;	
	fstream file("tem.txt", ios::out | ios::in | ios::binary);
	/*
	st.getdata();
	file.write((char*)&st, sizeof(st));
	file.close();
	st.putdata();*/

	
	int size = sizeof(st);
	while (file.read((char*)&st, sizeof(st)))
	{
		
		if (st.rollno == 1)
		{
			file.seekp(-size,ios::cur);
			strcpy(st.name, "eeeee");
			file.write((char*)&st, sizeof(st));
			break;
		}
		
	}
	file.close();
	
	

	file.open("tem.txt", ios::in);
	while (file.read((char*)&st, sizeof(st)))
	{
		st.putdata();
	}
	file.close();
}
void stuseek()
{
	stu st;

	fstream file("tem.txt", ios::out | ios::in | ios::binary);
	streamoff pos;
	while (file.read((char*)&st, sizeof(st)))
	{
		pos = file.tellg();
		//cout << pos;
		//cout << endl;
		//cout << file.tellp();
		//cout << endl;
		int i = -1;
		int size = sizeof(st);
		if (st.rollno == 1)
		{
			file.seekg(-size);
			
			
			cout << file.tellg();
			cout << endl;
			cout << file.tellp();
			cout << endl;
			
		}
		break;
	}
	file.close();
}

void filehandling2()
{

	char str[] = "hello good bye\njhewdgh uwheyguyw wqeguy/nwueguy aterty ewrhu";
	fstream inout("texts/stu.txt", ios::out);

	inout << str;
	inout.close();

	inout.open("texts/stu.txt", ios::in);
	char ch[20];
	//	char c;
	while (!inout.eof())
	{
		inout.getline(ch, sizeof(ch));
		cout << ch;
	}
}
void filehandling3()
{

	char str[] = "ram krishna hari";

	fstream inout("texts/stuu.txt", ios::out);

	inout << str;

	inout.close();

	inout.open("texts/stuu.txt", ios::in);
	char ch[20];

	while (!inout.eof())
	{

		inout >> ch;

		cout << ch;
	}
}

void filehandling4()
{
	fstream file;
	//open file sample.txt in and Write mode
	file.open("sample.txt", ios::out);
	if (!file)
	{
		cout << "Error in creating file!!!";
		return;
	}
	//write A to Z
	file << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//print the position
	cout << "Current position is: " << file.tellp() << endl;
	file.close();

	//again open file in read mode
	file.open("sample.txt", ios::in);
	if (!file)
	{
		cout << "Error in opening file!!!";
		return;
	}
	cout << "After opening file position is: " << file.tellg() << endl;

	//read characters untill end of file is not found
	char ch;
	while (!file.eof())
	{
		cout << "At position : " << file.tellg();   //current position
		file >> ch;   //read character from file
		cout << " Character \"" << ch << "\"" << endl;
	}

	//close the file
	file.close();


}
void filehandling5()
{
	fstream file("texts/poem.txt", ios::in);

	char line[80];
	file.seekp(-1, ios::end);//seekg
	while (!file.eof())
	{
		file.getline(line, 80);
		cout << line << endl;
	}
	file.close();
}