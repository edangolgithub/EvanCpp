#pragma once
#include<iostream>
using namespace std;
class Stock
{
long int ID; 
float Rate;
int Date; 
public:  
	Stock()
	{
		ID = 1001;
		Rate = 200;
		Date = 1;
	}
	void RegCode(long int I, float R)
	{
		ID = I;   
		Rate = R;
	}
	void Change(int New, int DT)
	{
		Rate += New; 
		Date = DT;
	}
	void Show() 
	{
		cout << "Date :" << Date << endl;   
		cout << ID << "#" << Rate << endl;
	}
}; 
void runstock() 
{
	
	cout << sizeof(Stock);
	Stock A, B, C;
	A.RegCode(1024, 150);
	B.RegCode(2015, 300);
	B.Change(100, 29); 
	C.Change(-20, 20);  
	A.Show();  
	B.Show();  
	C.Show(); 
}
#define size 5
class Item
{
public:
	int ItemCode;
	float price;
	
};
class ItemCollection
{
public:
	Item ItemArr[size];

	void initialize(Item arr[])
	{
		for (int i = 0; i < size; i++)
		{
			ItemArr[i] = arr[i];
		}
	}
	void largestprice()
	{
		float p = 0;
		int code = 0;
		for (int i = 0; i < size; i++)
		{
			if (ItemArr[i].price > p)
			{
				p = ItemArr[i].price;
				code = ItemArr[i].ItemCode;
			}
		}
		cout << "the most expensive item is with code " << code << endl;
		cout << "the price of the item is Rs." << p << endl;
	}
	void sumofprice()
	{
		float sum = 0;
		for (int i = 0; i < size; i++)
		{
			
				sum =sum+ ItemArr[i].price;
				
		}
		cout << "the sum of item price is " << sum << endl;
		
	}

};

void runitemcoll()
{
	ItemCollection col;
	Item i1, i2, i3, i4, i5;
	i1.ItemCode = 1; i1.price = 100;
	i2.ItemCode = 2; i2.price = 50;
	i3.ItemCode = 3; i3.price = 150;
	i4.ItemCode = 4; i4.price = 200;
	i5.ItemCode = 5; i5.price = 60;
	Item Items[] = { i1,i2,i3,i4,i5 };
	col.initialize(Items);
	col.largestprice();
	col.sumofprice();
}


