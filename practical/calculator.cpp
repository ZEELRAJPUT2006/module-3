#include<iostream>
using namespace std;

class calc{
	public:
		int a,b,c;
		
		void getvalue(){
			cout<<"enter a and b";
			cin>>a>>b;
		}
		
		void add()
		{
			cout<<"\n addition is"<<a+b;
		}
		
		void sub()
		{
			cout<<"\n substraction is"<<a-b;
		}
		
		void mult()
		{
			cout<<"\n multiplication is"<<a*b;
		}
		
		void div()
		{
			cout<<"\n division is"<<a/b;
		}
};

main()
{
	calc c;
	c.getvalue();
	c.add();
	c.sub();
	c.mult();
	c.div();
}
