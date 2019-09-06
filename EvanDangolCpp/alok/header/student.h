#pragma once
#include<iostream>
using namespace std;

#include<conio.h>
#include<stdio.h>

class student {
private:
	int admno;
	char sname[20];
	float eng, math, science;
	float total;
	float ctotal() {
		return eng + math + science;
	}
public:
	void Takedata()
	{
		
		cout << "Enter admission number: ";
		cin >> admno;
		cout << endl << "Enter student name: "<<endl;
		cin.ignore();
		gets_s(sname);
		cout << "Enter marks in english:";
		cin >> eng;   cout << "Enter marks in math:";
		cin >> math;   cout << "Enter marks in science:";
		cin >> science;   total = ctotal();
	}  void Showdata() { cout << endl << "..........Student information...." << endl;   cout << "Admission number " << admno;   cout << "\nStudent name " << sname;   cout << "\nEnglish " << eng;   cout << "\nMath " << math;   cout << "\nScience " << science;   cout << "\nTotal " << total; }
};
int runstudent() { 
	//clrscr();
	student obj;
	obj.Takedata();
	obj.Showdata();
	getch();
	return 0;
}