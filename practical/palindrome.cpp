#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char str[50],count=1;
	int len,i;
	cout<<"enter the string";
	cin>>str;
	
	len = strlen(str);
	
	for(i=0; i<len/2; i++)
	{
		
		if(str[i] != str[len-1-i])
		{
		    count= 0;
		    break;
		}
	}
	
	if(count==1)
	{
		cout<<"\n string is palindrome";
	}
	else
	{
		cout<<"\n string is not palindrome";
	}
}
