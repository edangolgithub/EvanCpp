#include<iostream>
using namespace std;

class abc{
	private:
		float balance;
		
	int a;
	protected:
		int b;
		public:
			int c;
			void setbalnce(float b)
			{
				balance=b;
			}
			float getbalance()
			{
				return balance;
			}
};

void ewfmain()
{
	abc x;
x.setbalnce(100000);
cout<<x.getbalance();
}
