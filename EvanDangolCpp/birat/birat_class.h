#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

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
			cout <<name<< " fly" << endl;
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
				cout <<speed<< "max speed:" << endl;
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