#include<iostream>
using namespace std;
struct student
{
	int age;
	float roll;
	const char *name;
};
union foo
{
 int x;
 int y;
 char ch;
};
void gjhfg()
{   student s;
	s.age=40;
	s.roll=45;
	s.name="ribesh";
	cout<<s.name<<endl;
	cout<<s.age<<endl;
	cout<<s.roll<<endl;
	foo f;
f.x = 65;
cout<<f.ch;
}
