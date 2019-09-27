#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#pragma region oldclasses
class animal
{
public:
	char name[50];
	int legs;
	char color[50];

	void eat()
	{
		cout << "i eat" << endl;
	}
	void sleep()
	{
		cout << "i sleep" << endl;
	}
	void speak()
	{
		cout << "i speak" << endl;
	}
	void getlefofanimal()
	{
		cout << legs << endl;
	}

	void displayanimalk()
	{
		cout << "name of animal :" << name << endl;
		cout << "legs of animal :" << legs << endl;
		cout << "colorw of animal :" << color << endl;
	}

	 virtual void poly()
	{
		cout << "this is animal class";
	}
};

class bird :public animal
{
public:

	int wingspan;
	int age;

	bird()
	{
		legs = 2;
	}
	void fly()
	{
		cout << name << " fly" << endl;
	}
	void poly()
	{
		cout << "this is bird class";
	}

};

class tiger:public animal
{
public:
	tiger()
	{

	}
	void poly()
	{
		cout << "this is tiger class";
	}
};
class vehicle
{
public:
	int speed;
	int wheels;
	int seats;
	char name[50];
	char brand[50];

	void huyy()
	{
		cout << speed << "max speed:" << endl;
	}


};
class car :public vehicle
{
public:
	void owner()
	{
		cout << "owner's name:" << endl;
	}
};

void runclassold()
{
	animal abc;
	abc.legs = 12;
	strcpy(abc.name, "tommy");
	strcpy(abc.color, "black");
	abc.displayanimalk();


	animal def;
	def.legs = 4;
	strcpy(def.name, "jack");
	strcpy(def.color, "grey");
	def.displayanimalk();



	//#pragma region xyz
	//	animal myanimal;
	//	
	//	myanimal.sleep();
	//
	//	myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep();
	//	myanimal.speak();
	//
	//	myanimal.speak();
	//	myanimal.legs = 5;
	//	myanimal.getlefofanimal();
	//
	//
	//
	//	animal youranimal;
	//	youranimal.legs = 17;
	//	youranimal.getlefofanimal();
	//#pragma endregion

	bird ghi;
	ghi.age = 14;
	strcpy(ghi.color, " white");
	ghi.wingspan = 13;
	strcpy(ghi.name, "hawk");

	//ghi.fly();
	ghi.displayanimalk();


	/*car suzuki;
	strcpy(suzuki.name, "allas");
	suzuki.owner();*/



}

#pragma endregion

class bankaccount
{
private:
	double balance;

public:
	bankaccount()
	{
		balance = 0;
		interest = 100;
	}
	void withdraw(double amount)
	{
		balance = balance - amount;
	}
	void deposit(double amount)
	{
		balance = balance + amount;
	}
	void showbalance()
	{
		cout << "you haver Rs. " << balance<<endl;
	}
protected:
	double interest;
};



class motorcycle
{
private:
	double sum;
public:
	motorcycle()
	{
		sum = 0;
	}
	void tax(double amount)
	{
		sum = sum - amount;
	}
	void fund(double amount)
	{
		sum = sum + amount;
	}
	void total()
	{
		cout << "total cost of bike is rs." <<sum<<endl;
	}
};



class savingaccount:public bankaccount
{
public:
	void getinterest()
	{
		cout << interest;
	}
};
class currentaccount:public bankaccount
{


};
