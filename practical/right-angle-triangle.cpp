#include<iostream>
using namespace std;

main()
{
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		for(k=4; k>=i; k--)
		{
		     cout<<" ";
	}
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}
		
		cout<<"\n";
	}

}
