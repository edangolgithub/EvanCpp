#pragma once
#include<iostream>
using namespace std;
#define null 0
class node
{
public:
	char name[50];
	node *next;
};
class evanlinkedlist
{
public:
	node *head=null;
	void insert(const char *name)
	{
		node *newnode = new node;
		strcpy(newnode->name, name);
		
			newnode->next = head;		    
			head = newnode;
		
	}

	void remove()
	{
		if (head == NULL) {
			cout << "List is empty!" << endl;
			return;
		}
		cout << head->name << " is removed." << endl;
		head = head->next;

	}
	void find(const char *name)
	{
		if (head == NULL) {
			cout << "List is empty!" << endl;
			return;
		}
		node* temp = head;
		while (temp != null)
		{
			if (strcmp(temp->name, name) == 0)
			{
				cout << temp->name << " is found." << endl;
				
			}
			temp = temp->next;
		}
		

	}
	void display()
	{
		node* temp = head;
		while (temp != null)
		{
			cout << temp->name<<endl;
			temp = temp->next;
		}
	}
};