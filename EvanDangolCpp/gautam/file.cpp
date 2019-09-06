#include<iostream>
#include<fstream>
using namespace std;

void ew2rt5fas2()
{
	fstream f;
	// file lekhna
//	f.open("gautam.txt",ios::out);
//	f<<"apple";
///////	f.close();

// file padna-
f.open("gautam.txt",ios::in);
string mem;

f>>mem;

f.close();
cout<<mem;
}
