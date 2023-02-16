//simple calculator
#include<iostream>
using namespace std;
class cal
{
	int x,y,exp;
	public:
		void getdata();
	};
void cal::getdata()
{
	cin>>x>>y>>exp;
	switch(exp)
{
	case 1:
		cout<<"sum of the nos="<<x+y;
	break;
	case 2:
		cout<<"diff of the nos="<<x-y;
	break;
	case 3:
		cout<<"multi of the nos="<<x*y;
	break;
	case 4:
		cout<<"div of the nos="<<x/y;
	break;
	default:
		cout<<"give your choice";
		}
	}
int main()
{
	cal c;
	c.getdata();
	return 0;
}
