//#include<iostream>
//#include<fstream>
//using namespace std;
//class	Route
//{
//int	Route_No=0;	
//char Route_Name[21];	
//int	No_kms=0;	
//public:
//void	new_Route	()
//{
//	cout<<"input route number"<<endl;
//	cin>>Route_No;
//	cout<<"input route name"<<endl;
//    cin>>Route_Name;
//	cout<<"no of kilometer"<<endl;
//	cin>>No_kms;
//	
//
//}
//void show_Route	()
//{
//		cout<<"Route Name : "<<Route_Name<<endl<<"Route no : "<<Route_No<<endl<<"No_kms : "<<No_kms<<endl;
//}
//int	Get_RouteNo()
//{
//	return	Route_No;
//}
//void	update_kms	(int k)	
//{	No_kms=k;
//}
//};
//
//void Save_Rout(Route R)
//{
//	fstream File("Route.DAT",ios::in|ios::app|ios::binary);
//	File.write((char*)&R,sizeof(R));
//}
//
//void Display_Rout()
//{
//	int count=0;
//	Route R;
//	fstream File("Route.DAT",ios::in|ios::binary);
//while((File.read((char*)&R,sizeof(R))))
//{
//count++;
//R.show_Route();
//}
//cout<<count<< " records"<<endl;
////while(!File.eof())
////{
////File.read((char*)&R,sizeof(R));
////R.show_Route();
////}
//}
//void Update_Route(int No,int New_kms)	
//{
//Route R;
//fstream	File("Route.DAT",ios::in|ios::out|ios::binary);
//while(!File.eof())
//{
//	//long pos=File.tellg();
////long pos1=File.tellp();
////cout<<pos<<endl;
////cout<<pos1<<endl;
//File.read((char*)&R,sizeof(R));
//if((R.Get_RouteNo()	==	No))
//{
//	R.update_kms(New_kms);
////_______________________	//Statement	1
////_______________________	//Statement	2
//
// //Statement 1: 
//File.seekp(-1*sizeof(R),ios::cur); 
////long pos=File.tellg();
////long pos1=File.tellp();
////cout<<pos<<endl;
////cout<<pos1<<endl;
////Statement 2:
// File.write((char*)&R,sizeof(R));  
//cout<<"Route	Details	updated"<<endl;
//}
//}
//File.close();
//}	
//
//void w()
//{
////	Route r1;
////	r1.new_Route();
////Save_Rout(r1);
////	Route r2;
////	r2.new_Route();
////Save_Rout(r2);
////	Route r3;
////	r3.new_Route();
////	Save_Rout(r3);	
//
//Update_Route(2,5);
//Display_Rout();
//}																									
