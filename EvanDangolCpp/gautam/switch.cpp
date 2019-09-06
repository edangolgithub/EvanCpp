
#include<iostream>

using namespace std;



void tuyhtr()
{
	
	/*int x = 5;

	switch (x)
	{
	case 11:
		cout << "x is 11";
		break;
	case 12:
		cout << "hello";
		break;
	case 1:
		cout << "bye";
		break;
	case 50:
		cout << "hurray";
		break;
	default:
		cout << "nepal";
		break;
	}*/
	
	char ch;
	do {
		char c;
		cout << "enter one letter only" << endl;
		cin >> c;
		if (!isalnum(c))
		{
			cout << "it is symbol"<<endl;
		}
		else if (isdigit(c))
		{
			cout << "it is digit" << endl;
		}
		else
		{
			c = tolower(c);
			switch (c)
			{
			case 'a':
				cout << "vowel" << endl;
				break;
			case 'e':
				cout << "vowel" << endl;
				break;
			case 'i':
				cout << "vowel" << endl;
				break;
			case 'o':
				cout << "vowel" << endl;
				break;
			case 'u':
				cout << "vowel" << endl;
				break;
			default:
				cout << "consonant" << endl;
				break;
			}
		}
		cout << "continue??? y/n"<<endl;
		
		cin >> ch;
	} while (ch != 'n');
	


	
}