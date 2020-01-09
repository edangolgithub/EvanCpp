#include<stdio.h>


int main()
{
 /// variable 3   name  value address
 
 
 int num;
 
 scanf("%d",&num);
 
 printf("%d",num*num);
 return 0;
 
 
 int len;
 int breadth;
 printf("enter length:"); 
 scanf("%d",&len);
  printf("enter breadth:"); 
 scanf("%d",&breadth);
 
 int area= len*breadth;
 
 printf(" area is %d",area);
 return 0;
   
int x=0,y=0, z=0,result=0;  
  
printf("enter first number:"); 
 
scanf("%d",&x);  //inputb  ampersand  address of
printf("enter second number:");  
scanf("%d",&y);  
printf("enter third number:");  
scanf("%d",&z); 
  
result=x+y+z;  
printf("sum of %d and %d and %d is :%d ",x,y,z,result);  
  

   
}
