#include<iostream>
using namespace std;

class BankAccount{
	private:
		int balance;
		
		public:
			void getbalance()
			{
				cout<<"enter balance";
				cin>>balance;
			}
		
	public:
		BankAccount(double initblance)
		{
			if(initblance >= 0)
			{
				balance = initblance;
			}
			else
			{
				balance = 0;
				cout<<"initial balance is invalid";
			}
		}
		
		void deposit(double amount)
		{
			if(amount > 0)
			{
				balance += amount;
				cout<<"deposited:"<<amount<<"\n";
			}
			else
			{
				cout<<"invalid depsoit";
			}
		}
		
		void withdraw(double amount)
		{
			if(amount>0 && amount <= balance)
			{
				balance -= amount;
				cout<<"withdraw"<<amount<<"\n";
			}
			else
			{
				cout<<"invalid funds";
			}
		}
		
		void show()
		{
			cout<<"current balance is"<<balance<<"\n";
			}	
};

main()
{
	BankAccount b1(1000);
    //BankAccount(1000);
	//b1.getbalance();
	b1.deposit(500);
	b1.withdraw(600);
	b1.show();
	
}
