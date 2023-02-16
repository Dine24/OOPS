//addition of elements in an arrray
#include<iostream>
using namespace std;
int main()
{
	int a[3],b[3],add[3];
	cout<<"enter 3 nos for array A="<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 3 nos for array B="<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>b[i];
	}
	cout<<"Addition of A and B="<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=a[i]+b[i];
		cout<<add[i]<<" ";
	}
	
	return 0;
}
