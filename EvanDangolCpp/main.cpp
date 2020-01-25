#include <iostream>
using namespace std;

int nmain(){
	int array[] = { 2,4,6,8,10 };
	int* p;
	p = &array[2];
	cout << *p;
	cout << p;


	return 0;

}