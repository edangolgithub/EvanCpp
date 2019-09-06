# include<iostream>
using namespace std;

  char grade()
  {
  	int m=60;
  	int n=70;
  	int e=40;
  	
  	int g=(m+n+e)/3;
  	
  	if(g>=80 && g<=100)
  	{
	  return 'A';
	  }
  	
  	else if(g>=70 && g<=80)
  	{
	 return  'B';
	  }
  	
  	else if(g>=50 && g<=70)
    {
    	return  'C';
	}
  }
  
  void ew2rt5fa()
  {
  	
  	cout<<grade()<<endl;
  }
