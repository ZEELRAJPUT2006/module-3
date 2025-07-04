#include<iostream>
using namespace std;

class person{
	public:
		int id;
		char pname[50];
		
		void getperson()
		{
			cout<<"\n enter id";
			cin>>id;
			
			cout<<"\n pname";
			cin>>pname;
		}
};

class student{
	public:
		int sid;
		char sname[50];
		
		void getstudetails()
		{
			cout<<"\n enter sid";
			cin>>sid;
			
			cout<<"\n enter sname";
			cin>>sname;
		}
};

class teacher : public person, public student{
	public:
		int tid;
		char tname[50];
		
		void getteacherdetails()
		{
			cout<<"\n enter tid";
			cin>>tid;
			
			cout<<"\n enter tname";
			cin>>tname;
		}
		
		void show()
		{
			//this->getperson();
			cout<<"\n pid="<<id<<"\t pname="<<pname;
			cout<<"\n sid="<<sid<<"\t sname="<<sname;
			cout<<"\n tid="<<tid<<"\t tname="<<tname;
		}
};

main()
{
	teacher t1;
	t1.getperson();
	t1.getstudetails();
	t1.getteacherdetails();
	t1.show();
	
}
