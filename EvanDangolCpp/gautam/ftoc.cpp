#include<iostream>
using namespace std;

float ftoc(float f)
{
	float c=(f-32)*5/9;
	return c;
}


float buddha(float l,float b)
{
	float  area =l*b;
	return area;
	
}
float makedouble( float x)
{
	return x*x;
}
float samsung(float sa)
{
	return sa*sa*sa-2*sa*sa+2*sa*sa*sa*sa-10;
	
}
void h()
{
  float x=2;
  cout<<samsung(x);
}
