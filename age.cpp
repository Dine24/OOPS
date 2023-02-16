#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a>=18)
	cout<<"this person is elgible to vote";
	else
	cout<<"this person is not elgible to vote"<<18-a<<"years left to vote";
	return 0;
}
