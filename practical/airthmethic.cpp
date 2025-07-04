#include<iostream>
using namespace std;
main()
{
	int num1,num2,ans;
	float ans1;
	
	cout<<"\n enter num1";
	cin>>num1;
	
	cout<<"\n enter num2";
	cin>>num2;
	
	ans = num1+num2;
	cout<<"\n addition is"<<ans;
	
	ans = num1 - num2;
	cout<<"\n substraction is"<<ans;
	
	ans = num1 * num2;
	cout<<"\n multiplication is"<<ans;
	
	ans1 = (float)num1/num2;
	cout<<"\n division is"<<ans1;
	
	num1++;
	cout<<"\n increment is"<<num1;
	
	num2--;
	cout<<"\n decrement is"<<num2;
	
}
