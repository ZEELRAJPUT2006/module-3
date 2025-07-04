#include<iostream>
using namespace std;

main(){
	int arr1[3][3], arr2[3][3],arr3[3][3];
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"\n enter arr"<<i<<j;
			cin>>arr1[i][j];
		
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			
			cout<<"\t arr1"<<arr1[i][j];	
		}
		   cout<<"\n";
	}
	
	cout<<"=====================================================================";
	for(i=0; i<3 ;i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"\n enter arr"<<i<<j;
			cin>>arr2[i][j];
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			
			cout<<"\t arr2"<<arr2[i][j];
		}
		    cout<<"\n";
	}
	
	cout<<"====================================================================================";
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			arr3[i][j] = arr1[i][j]+arr2[i][j];
		
		}
	}
	
	cout<<"===================================================================================";
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		
		    cout<<"\t sum is="<<arr3[i][j];
		}
		   cout<<"\n";
	}
}
