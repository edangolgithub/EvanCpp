#include<iostream>
using namespace std;
//new
class humonoid
{
	public:
	virtual	void eat()
		{
			cout<<"i eat 1 egg";
		}
		void walk()
      {
    	cout<<"i walk";
      }
};
class man:public humonoid
{
 
};

class superman:public humonoid
{
	public:
		void fly()
		{
			cout<<"i fly";
		}
		void eat()
		{
			cout<<"i eat 1000 eggs for breakfats";
		}
};
void tyu()
{
	humonoid *sm= new superman;
	
	sm->eat();
}

