#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

 main()
{
	int number, attemp=7,i=1,guess;
	cout<<"\n you have to guess the number in between 1 to 100";
	cout<<"\n you have only 7 attemps to guess the number";
	
	srand(time(0));
	number = rand()%100+1;
	
	
	while(i<=attemp)
	{
	    cout<<"\n attemps:"<<i<<"\n guess the number";
	    cin>>guess;
		i++;
		
		if(guess > number)
		{
			cout<<"\n too high";
		}
		else 
		{
			cout<<"\n too low";
		}
		
		if(number == guess)
		{
			cout<<"\n congratulation is win";
			break;
		}
	}
	
	cout<<"\n the guessing number is"<<number;
}
