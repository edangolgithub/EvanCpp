#include<iostream>
 using namespace std;
 #define SIZE 5
 int arr[5];
 int q[SIZE];
// int front=-1;
// int rear=-1;

int front=-1;
int rear=-1;
 
 void enqueue(int data)
 {
 	if(rear>=4)
 	{
 		cout<<"queue over flow"<<endl;
 	//	front=-1;
 	//	rear=-1;
	 }
	 else
	 {
	 	if(front=-1)
		 {
		 	front=0;
		 }	
	 	rear++;
	 	arr[rear]=data;
	 	cout<<"enque"<<data<<endl;
	 }
 }
 int dequeue()
 {
 	if(front>rear)
 	{
 		cout<<"queue under flow"<<endl;
 		return -1;
	 }
	 else
	 {
    int data=arr[front];	 
 	front++;
 	return data;
 }
 }
 
 void display()
 {
 		if(front>rear)
 	{
 		cout<<"nothing to display"<<endl;
	 }
	 else
	 {
	 
 	cout<<endl<<"Queue Items:"<<endl;
 	
 	for(int i=front; i<=rear;i++)
 	{
 		cout<<arr[i]<<endl;
	 }
	 cout<<endl;
}
 }
 
 
 
 
 void rtre()
 {
 	enqueue(1);
 		display();
 	enqueue(2);
 		display();
 	enqueue(3);
 		display();
 	enqueue(4);	
 		display();
	enqueue(5);
		display();
	enqueue(6);
	display();
//		enqueue(7);
//	display();
	cout<<"dequed "<<dequeue()<<endl;
 	display();
 cout<<"dequed "<<dequeue()<<endl;
 display();
 cout<<"dequed "<<dequeue()<<endl;
 	display();
  cout<<"dequed "<<dequeue()<<endl;
 	display();
  cout<<"dequed "<<dequeue()<<endl;
 	display();
 	cout<<"dequed "<<dequeue()<<endl;
 	display();
 
 }
