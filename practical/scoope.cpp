#include<iostream>
using namespace std;

// global variable
int c;

void add(int a, int b)
{
	// int a,b is local variable
	c=a+b;
	cout<<"\n addition is="<<c;
}

main()
{
	add(5,6);
}
