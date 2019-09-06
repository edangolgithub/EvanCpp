#include <iostream>
#include<exception>
using namespace std;
int add();
class mex:public exception
{
	public:
 const char *what() const throw()
	{
		return "error";
	}
};
void rrerrtrtr () {
  try
  {
  	mex ex;
  	
    throw ex;
  }
  
  catch (exception& ex)
  {
    cout << "An exception occurred. Exception Nr. " <<ex.what() << '\n';
  }
  return ;
}
