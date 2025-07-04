#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter a";
	cin>>a;
	
	cout<<"enter b";
	cin>>b;
	
	if(a>b && b<a)
	{
		cout<<"a is grater";
	}
	else
	{
		cout<<"b is grater";
	}
	
	if(a>b || b<a)
	{
		cout<<"\n a is grater";
	}
	else
	{
		cout<<"\n b is grater";
	}
	
	if(a != b)
	{
		cout<<"\n a is not equal to b";
	}
}
