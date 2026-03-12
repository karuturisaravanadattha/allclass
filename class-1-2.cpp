#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int rollnumber;
		string name;
	    student(string name,int rollnumber){
	    	this->name = name;
	    	this->rollnumber = rollnumber;
		}
		void display()
		{
			cout << "name:" << name << endl;
			cout << "rollnumber:" << rollnumber << endl;
		}
		
		
};
int main()
{
	student s1("shanmukh",117);
	student s2("kavya",116);
	s1.display();
	s2.display();
}