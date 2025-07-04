#include<iostream>
using namespace std;
main()
{
	int a=5, b=10,c;
	
	c=a>b;
	cout<<"\n grater is"<<c;
	
	c=a<b;
	cout<<"\n less than is"<<c;
	
	c=a>=b;
	cout<<"\n grater than equal to is"<<c;
	
	c = a<=b;
	cout<<"\n less than equal to is"<<c;
	
	c = a != b;
	cout<<"\n not equal to is"<<c;
	
	c = a==b;
	cout<<"\n equal to is"<<c;
}
