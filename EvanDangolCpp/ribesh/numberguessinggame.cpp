#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

void gjhg()
{
cout<<"Welcome to our number guessing game";
cout<<endl;
cout<<"      by Ribesh Amatya             ";

char ch;
cout<<endl<<"Please press 'p' to play game ";
cin>>ch;
if(ch!='p')
{
	goto end;
}
else
{
	srand (time(NULL));
    int memory = rand() % 100 + 1; 
	int chance=7;
	int num;
	
	cout<<endl<<"game started";
	
	cout<<endl;
	cout<<"I am intelligent computer and i have a number in my mind.\nWhich is between 1 to 100.\n can you guess"<<endl;
	cout<<"please enter a number between 1 to 100"<<endl;
	cout<<"you have "<<chance<<" chance left"<<endl;

	while(chance>=1)
	{
	chance--;
	cin>>num;
	
	if(num<memory)
	{
		cout<<"too low"<<" you have "<<chance<<" chance left"<<endl;
	}
	else if(num>memory)
	{
		cout<<"too high"<<" you have "<<chance<<" chance left"<<endl;
	}
	else
	{
		cout<<"correct answer"<<endl;
			cout<<"you are very good player \n congratulation!!!!!"<<endl;
		break;
	}
	
}
	
	
	if(chance<=0|| num!=memory)
	{
		cout<<"you are not good player \nyou lost!!!!!"<<endl;
		cout<<"the number was "<<memory<<endl;
	}
	
	
}

end:
	if(ch!='p')
	cout<<endl<<"bye bye u didnot want to play game";
}
