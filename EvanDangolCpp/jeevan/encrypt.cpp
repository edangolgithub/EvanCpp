#include<iostream>
using namespace std;

void Encrypt (char *S, int key)
{
char *Temp = S;
 
if (key%2 == 0)
{
key --;
cout<<key;
}
while (*Temp != '\0')
{
    *Temp += key;

    Temp += key;
    //cout<<Temp<<endl;
}
 cout<<*Temp<<endl;
}
 

void rrer ()
{

int Key_Set [ ] = {1, 2};
char Pvt_Msg [ ] = "Computer 2018";
//for (int C = 0; C<2; C++)
//{
Encrypt (Pvt_Msg, Key_Set [0]);
//cout <<"New Encrypted Message after Pass "<<C+1<<" is :"<<Pvt_Msg;
cout<<endl;
//}

 

}


