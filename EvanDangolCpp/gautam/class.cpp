#include<iostream>
using namespace std;

class man
{
	public:
	string name;
	int age;
	string country;
	
	void speak()
	{
		cout<<this->name<< "says hello"<<endl;
	}
	void sleep()
	{
		cout<<this->name<< " is sleeping"<<endl;
	}
	
	void display()
	{
		cout<<"name : "<<this->name<<endl;
		cout<<"age :"<<this->age<<endl;
		cout<<"country :"<<this->country<<endl;
	}
};
void ew()
{
	man birendra;
	man gautam;
	
	birendra.name="birendrta chaudhary";
	birendra.age=18;
	birendra.country="nepoal";
	
	gautam.name="gautam arrytal";
	gautam.age=16;
	gautam.country="nepal";
	
	birendra.display();
	gautam.display();
	
	birendra.sleep();                                                         
	birendra.speak();
	gautam.sleep();
	
}


