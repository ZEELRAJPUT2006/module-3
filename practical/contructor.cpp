#include<iostream>
using namespace std;

class maths{
	int a,b;
	
	  public:
	  	maths()
	  	{
	  		cout<<"\n default constructor is called";
		  }
		 
		 // parameter 
		  maths(int x, int y)
		  {
		  	a=x;
		  	b=y;
		  }
		  
		// copy
		maths(maths &m2)
		{
			a = m2.a;
			b = m2.b;
		}
		
		void display()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};

main()
{
	maths m1, m2(5,10);
	m2.display();
	maths m3;
	m3.display();
}
