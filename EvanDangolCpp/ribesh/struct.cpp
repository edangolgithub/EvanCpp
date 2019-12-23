#include<string.h>
#include<stdio.h>
struct mobile
{
	int id;
	float price;
	char country[];

};

int main()
{
	mobile myxiaomi;
	myxiaomi.id = 1;
	strcpy(myxiaomi.country, "china");
	myxiaomi.price = 500;

	mobile ribeshsamsung;
	myxiaomi.id = 10;
	strcpy(myxiaomi.country, "south korea");
	myxiaomi.price = 1000;

	mobile biswomobile;
	myxiaomi.id = 12;
	strcpy(myxiaomi.country, "Nepal");
	myxiaomi.price = 100;


	printf("%s", myxiaomi.country);

	printf("%s", biswomobile.country);
}