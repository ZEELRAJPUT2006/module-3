#include<iostream>
using namespace std;
main()
{
	int len,width,ans,r;
	float const PI = 3.14;
	float ans1;
	
	cout<<"\n enter len";
	cin>>len;
	
	cout<<"\n enter width";
	cin>>width;
	
	ans=len*width;
	cout<<"\n area of rectangle is"<<ans;
	
	cout<<"\n enter r";
	cin>>r;
	
	ans1 = (float)PI*r*r;
	cout<<"\n area of circle is"<<ans1;
	
}
