#include<bits/stdc++.h>
using namespace std;
class account{
	private: 
	  double balance;
	protected:
		double accountnumber;
	public: 
	  string holdername;
	  void setbalance(double b)
	  { 
	  	 balance=b;
	  }
	  double getbalance()
	  {
	      return balance;
      }
       void setaccountnumber(double acc)
	  { 
	  	 accountnumber=acc;
	  }
	  double getaccountnumber()
	  {
	      return accountnumber;
      }
};
int main()
{
	account bal;
	bal.holdername="shanmukh";
	bal.setbalance(30000);
	bal.setaccountnumber(24567890241);
	cout << "holdername:" << bal.holdername << endl;
    cout << "balance:" << bal.getbalance() << endl;
    cout <<  "accnum:" << bal.getaccountnumber()<< endl;
	
}
