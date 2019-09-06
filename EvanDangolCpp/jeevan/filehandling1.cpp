	#include <fstream>      // std::ofstream
	#include<iostream>
	using namespace std;
	class Labrecord 
	{
	 int Expno;
	  char Expriment[20];
	   char Checked;
	    int Marks;
		 public:
		  //function to enter Expriment details
		   void EnterExp();
		   //function to display Expriment details 
		   void ShowExp();
		   //fuction to retur Expno 
		   char RChecked() 
		   {
		    return Checked;
		    } 
		   //fuction to assign Marks 
		   void Assignmarks(int M)
		    {
			 Marks=M;
			}
	};
		    void ModifyMarks()
			 { 
			 fstream File;
			  File.open("Marks.DAT",ios::binary|ios::in|ios::out);
			  Labrecord L; 
			  int Rec=0;
			   while(File.read((char*)&L,sizeof(L))) 
			  {
			  if(L.RChecked()=='N')
			   L.Assignmarks(0); 
			   else L.Assignmarks(10); 
			   //_____________ //statement 1 
			  // _____________ //statement 2
			   Rec++; 
			   } File.close(); 
			   }
	
//	void uyiiou () 
//		{
//	
//	  ofstream outfile;
//	  outfile.open ("test.txt");
//	
//	  outfile.write ("This is an apple",16);
//	  long pos = outfile.tellp();
//	  
//	  cout<<pos;
//	  outfile.seekp (pos-7);
//	  outfile.write (" sam",4);
//	
//	  outfile.close();
//	
//	  return 0;
//	}
//	 void uyiiou () {
//  streampos begin,end;
//  ifstream myfile ("test.txt");
//  begin = myfile.tellg();
//  cout<<begin;
//  myfile.seekg (0, ios::end);
//  end = myfile.tellg();
//  cout<<end;
//  myfile.close();
//  cout << "size is: " << (end-begin) << " bytes.\n";
//  return 0;
//}
	
	void drtgrre () {

  std::ofstream outfile;
  outfile.open ("test.txt");

  outfile.write ("This is an apple",16);
  long pos = outfile.tellp();
  cout<<pos;
  outfile.seekp (pos-7);
   pos = outfile.tellp();
  cout<<pos;
  outfile.write (" sam",4);

  outfile.close();

  return ;
}

