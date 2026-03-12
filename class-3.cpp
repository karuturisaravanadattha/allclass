#include<bits/stdc++.h>
using namespace std;
class rectangle{
	public:
		int length;
		int breadth;
		 rectangle(int len ,int bre){
	        length = len;
	    	breadth = bre;
		}
			void area()
		{
			float area=length * breadth;
			cout << "area of the rectangle " << area << endl;
		}
		void perimeter()
		{
			float perimeter = 2*(length+breadth);
			cout << "perimeter of the rectangle" << perimeter << endl;
		}
};
int main()
{
	rectangle r1(20,50);
	r1.area();
	r1.perimeter();
}
