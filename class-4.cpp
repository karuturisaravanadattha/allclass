#include<bits/stdc++.h>
using namespace std;
class calculator{
	public: 
	   int n1;
	   int n2;
	   char n;
	   calculator(int n1,int n2,char n){
	   	this->n1=n1;
	   	this->n2=n2;
	   	this->n=n;
	   switch(n){
	   	case '+' :
	   		cout << n1+n2 << endl;
	   		break;
	   	case '-' :
	   		cout << n1-n2 << endl;
	   		break;
	   	case '*' :
	   		cout << n1*n2 << endl;
	   		break;
	   	default :
	   		cout << "no valid operator!"<< endl;	
	   } 
    }
        inline void add(int n1,int n2)
        {
            cout << "sum:" << (n1+n2) << endl;	
		}
		 inline void sub(int n1,int n2)
        {
        	cout << "sub:" << (n1-n2) << endl;
		}
		 inline void product(int n1,int n2)
        {
        	cout << "product:" << (n1*n2) << endl;
		}
};
int main()
{
    int n1,n2;
    char n;
     cout << "enter two numbers" << endl;
    cin  >> n1 >> n2;
    cout << "enter the operator" << endl;
    cin >> n;
    calculator(n1,n2,n);
}