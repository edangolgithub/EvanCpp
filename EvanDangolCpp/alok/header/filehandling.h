#include <iostream>
#include<iomanip>
#include<fstream>
 using namespace std; 

class Student
{ 
char roll[10]; 

char name[30]; 

int Percentage; 

public:

void EnterData()
{ 
gets_s(roll); 
gets_s(name);
cin>>Percentage; 
}

void DisplayData()

{ 
cout<<roll;

cout<<name;

cout<<Percentage<<endl;
cout<<endl;
}

int ReturnPercentage()
{ 
return Percentage; 
}
void writefile()
              {

                      ofstream f;
                      Student Stu;

                      f.open("Student.txt",ios::app|ios::binary);

                      Stu.EnterData();

                      f.write( (char *) &Stu, sizeof(Stu) );

                      f.close();

              }
       


void ReadFile(){

ifstream fin;

fin.open("student.txt",ios::in|ios::out|ios::binary);

Student A;

while((fin.read((char*)&A,sizeof(A)))){


//if(A.ReturnPercentage()>75)
//{

A.DisplayData();
//}

}

fin.close();

}

};

void createabc()
{
	fstream file("abc.txt", ios::out | ios::app);
	file<<"abcdefghijklmnopqrstuvwzyz";
}
void readabc()
{
	fstream file("abc.txt");
	char ch;
	
	while (file>>ch)
	{
		if (ch == 'z')
		{
			if (file >> ch)
			{
				cout << ch;
			}
		}
	}
	cout << endl;
	file.clear();
	file.seekg(8,ios::beg);
	while (true)
	{
		char x;
		file >> x;
		if (file.eof()) break;
		cerr << x ;
	}
}
