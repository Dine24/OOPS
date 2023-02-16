#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[n],t;
	cout<<"enter the n value";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cout<<a[i];
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	cout<<"after seeing";
	for(i=0;i<=n;i++)
	{
		cout<<a[i];
	}return 0;
}
