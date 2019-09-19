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

void drtgre()
{
Student st;
st.ReadFile();
//st.writefile();
}
