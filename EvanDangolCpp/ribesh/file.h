#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <string.h> 

void nmain()
{

    fopen("nccscollege.txt", "w");
	_fcloseall();
	rename("nccscollege.txt", "college.txt");

	

}