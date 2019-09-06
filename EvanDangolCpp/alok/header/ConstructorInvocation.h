#pragma once
#include<iostream>
using namespace std;
class A
{
public: A()
{
	cout << "A";
}
		~A()
		{
			cout << "~A";
		}
};
class B
{
public: B()
{
	cout << "B";
}
		~B()
		{
			cout << "~B";
		}
};
class C
{
public: C()
{
	cout << "C";
}
		~C()
		{
			cout << "~C";
		}
private:
	B c1;
	A c2;
};
class D
{
public: D()
{
	cout << "D";
}
		~D()
		{
			cout << "~D";
		}
};
class E :public C
{
public: E()
{
	cout << "E";
}
		~E()
		{
			cout << "~E";
		}
private:
	D e1;
	C e2;
};
int runConstructorInvocation()
{
	 E();
	return 0;
}