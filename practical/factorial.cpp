#include<iostream>
using namespace std;

int fact(int n)
{
	int fac;
	if(n==1)
	{
		return 1;
	}
	else
	{
		fac = n*fact(n-1);
		return fac;
	}
}
main()
{
	cout<<"factorial is"<<fact(6);
}
