#include<iostream>
using namespace std;
class student
{
	int m1,m2,m3,m4,m5,tot;
	char name1,name2,name3,name4,name5;
	float avg;
	public:
		void getdata()
		{
		
			cout<<"enter the name of the student1";
			cin>>name1;
			cout<<"enter the name of the student2";
			cin>>name2;
			cout<<"enter the name of the student3";
			cin>>name3;
	       cout<<"enter the name of the student4";
			cin>>name4;
			cout<<"enter the name of the student5";
			cin>>name5;
		}
		{
			cout<<"enter marks of the student\n";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		void calculation()
		{
			tot=m1+m2+m3+m4+m5;
			avg=tot/5;
		}
		void display()
		{
			cout<<"total marks of the student\n"<<tot;
			cout<<"avg marks of the student\n"<<avg;
		}
};
int main()
{
	student s;
	s.getdata();
	s.calculation();
	s.display();
}
