#include<iostream>
using namespace std;

class rectangle{
	
	public:
	int length;
	int width;
	int area;
	
	void getvalues(){
	     cout<<"enter length";
	     cin>>length;
	     
	     cout<<"enter width";
	     cin>>width;
	     
	     area=length*width;
	     //cout<<"area of rectangle"<<area;
	}
	
	void show()
	{
		 cout<<"area of rectangle"<<area;
	}
	
	
};
main()
{
	class rectangle r1;
	r1.getvalues();
	r1.show();
	 
}
