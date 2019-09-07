#include<iostream>
#include<string>
using namespace std;

class animal
{
	public:
		int age;
		string name;
		void display()
		{
			cout<<"name :"<<name;
			cout<<" age : "<<age;
		}
};

class dog: public animal
{
	
};
void tttaguu()
{
	animal a;
	a.name="kris";
	a.age=30;
	a.display();
}
