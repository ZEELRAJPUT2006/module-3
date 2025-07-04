#include<iostream>
using namespace std;


	void add(int a, int b)
	{
		int c = a+b;
		cout<<"\n addition is"<<c;
	}
	
	void sub(int a,int b)
	{
		int c = a-b;
		cout<<"\n substraction is"<<c;
	}
	
	void mulit(int a,int b)
	{
		int c = a*b;
		cout<<"\n multiplication is"<<c;
	}
	
	void div(int a,int b)
	{
		float c = (float)a/b;
		cout<<"\n division is"<<c;
	}
	
main()
{
   int a,b;
   cout<<"enter the value of a";
   cin>>a;
   
   cout<<"\n enter the value of b";
   cin>>b;
   
   
   add(a,b);
   sub(a,b);
   mulit(a,b);
   div(a,b);
}
