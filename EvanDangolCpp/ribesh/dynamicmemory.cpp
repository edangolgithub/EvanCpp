#include<iostream>
using namespace std;


class Box {
   public:
      Box() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor called!" <<endl; 
      }
};

void rdyer()
{
	int *p = new int[10];
	p[3]=56;
	cout<<p[3];
	delete p;
	int* intvar=NULL;
	intvar= new int;
	*intvar=45;
	cout<<*intvar;
	delete intvar;
	Box *b=new Box;
	delete b;
}
