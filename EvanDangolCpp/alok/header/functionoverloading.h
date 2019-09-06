#pragma once
#include<iostream>
using namespace std;
void	Execute(char	A, int	B)	//	Function	1
{

}
void	Execute(int	A, char	B)	//	Function	2
{

}
//void	Execute(int	P = 10)	//	Function	3
//{
//	cout << "called 3";
//}
void	Execute()	//	Function	4
{
	cout << "called 4";
}
//int	Execute(int	A)	//	Function	5
//{
//
//}
void Execute(int	&K)	//	Function	6 
{
	cout << "called 6";
}
