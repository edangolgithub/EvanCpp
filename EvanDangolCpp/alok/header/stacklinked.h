#include<iostream>
using namespace std;
   class node
   {
   public:   
   int data;  
   node* next;
   
};
node * head=NULL;
void push(int d)
{
	node *n=new node;
	n->data=d;

	if(head==NULL)
	{	n->next=NULL;
		head=n;
	}
	else
	{
		n->next=head;
		head=n;
	}
}
int pop()
{
	node *x=head;
    head=head->next;
    return x->data;
	
}
void display()
{
	node *x=head;
	while(x!=NULL)
	{
		cout<<x->data<<endl;
		x=x->next;
	}
}
void runstacklink()
{

	push(1);
	push(2);
	push(3);
	cout<<"In stack"<<endl;
	display();
	cout<<endl;
    cout<<"pop value "<<pop()<<endl<<endl;
    	cout<<"In stack"<<endl;
	display();
	
	
}
