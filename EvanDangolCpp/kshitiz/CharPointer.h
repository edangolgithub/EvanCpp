#pragma once
#include<iostream>
using namespace std;

char* reverse(char* str)
{
	char* str1 = (char*)malloc(sizeof(char) * strlen(str));
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	str--;
	
	int i = 0;
	while (true)
	{
		if (count <= 0)
		{
			break;
		}
		str1[i] = *str;
		str--;		
		count--;
		i++;
	}
	str1[i] = '\0';
	cout << str1;
	return str1;
}