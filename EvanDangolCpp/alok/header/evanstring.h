#pragma once
//#include<string.h>
#include<iostream>
using namespace std;
void str1()
{
	char dest[50] = "Learning C++ is fun";
	char src[50] = " and easy";
	char ss[100];
	strcpy(ss, src);
	strcat(dest, src);

	cout << ss;

}
int replace(char *s, char c1, char c2)
{
	int count = 0;
	for (; *s != '\0'; s++)
	{
		if (*s == c1)
		{
			*s = c2;
			count++;
		}
	}
	return count;
}
typedef char STRING[80];
typedef char s;
void MIXITNOW(STRING S)
{
	int Size = strlen(S);
	for (int I = 0; I < Size - 1; I += 2)
	{
		char WS = S[I];
		S[I] = S[I + 1];
		S[I + 1] = WS;
	}
	for (int I = 1; I < Size; I += 2)
	{
		if (S[I] >= 'M' && S[I] <= 'U')
		{
			S[I] = '@';
		}
	}
}
void runmixitnow()
{

	STRING Word = "CRACKAJACK";
	MIXITNOW(Word);
	cout << Word << endl;
}

void ChangeIt(char Text[], char C)
{
	for (int K = 0; Text[K] != '\0'; K++)
	{
		if (Text[K] >= 'F' && Text[K] <= 'L')
			Text[K] = tolower(Text[K]);
		else if (Text[K] == 'E' || Text[K] == 'e')
			Text[K] = C;
		else if (K % 2 == 0)
			Text[K] = toupper(Text[K]);
		else
			Text[K] = Text[K - 1];
	}
}

void runchangeit()
{
	char oldText[] = "pOwERALone";
	ChangeIt(oldText, '%');
	cout << "New TEXT:" << oldText << endl;
}
void repch(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (((i % 2) != 0) && (s[i] != s[i + 1]))
		{
			s[i] = '@';
			cout << "Hello";
		}
		else if (s[i] == s[i + 1])
		{
			s[i + 1] = '!';
			i++;
		}
	}
}
void runrepch()
{
	char str[] = "SUCCESS";
	cout << "Original String" << str;
	repch(str);
	cout << "Changed String" << str;
}
