#include<stdio.h>
#include<string.h>

struct expensecategory
{
	char expensecategoryname[50];
};
struct expenses
{
	expensecategory ec;
	char expensename[50];
	float price;
	int quantity;

};

expenses elist[100];
int index = 0;
void addexpense()
{
	expenses e;
	scanf("%s", &e.ec.expensecategoryname);
	scanf("%s", &e.expensename);
	scanf("%f", &e.price);
	scanf("%d", &e.quantity);
	elist[index] = e;
	index++;
}
void updatexpense()
{

}
void deleteexpense()
{

}
void displayexpense()
{
	int q;
	float p;
	float sum=0;
	for (int i = 0; i < 100; i++)
	{
		q = elist[i].quantity;
		p = elist[i].price;
		sum = sum+p * q;
	}
}
void displayexpenseofcat()
{
	char input[50];
	scanf("%s", &input);
	int q;
	float p;
	float sum = 0;
	for (int i = 0; i < 100; i++)
	{
		if (strcmpi(input, elist[i].ec.expensecategoryname))
		{
			q = elist[i].quantity;
			p = elist[i].price;
			sum = sum + p * q;
		}
	}

}

int main()
{
	expenses e;
	printf("press 1 for entering expenses 2 for displaying expenses 3 for updating expenses 4 for deleteing expenses");
}