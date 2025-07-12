#include<iostream>
using namespace std;

main()
{
	int arr[5];
	int i,sum=0,ave;
	
	for(i=0; i<5; i++)
	{
		cout<<"\n enter arr"<<i;
		cin>>arr[i];
	}
	
	for(i=0; i<5; i++)
	{
		sum = sum + arr[i];
			ave = sum/5;
	
	}
	
	cout<<"\n average is="<<ave;
}
