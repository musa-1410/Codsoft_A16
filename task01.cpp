#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()

{	int guess=0,random;
	
	srand(time(0));
	random=1+rand()%100;
	
	do {
		cout<<"Guess a number between 1-100: "<<endl;
		cin>>guess;
		
		if (guess<random-10)
		{
			cout<<"Your guess is too low, Please try again"<<endl;
		}
		
		else if (guess>random+10) 
		{
			cout<<"Your guess is too high, Please try again"<<endl;
		}
		
		else if (guess<random)
		{
			cout<<"Your guess is lower, Please try again"<<endl;
		}
		
		else if (guess>random)
		{
			cout<<"Your guess is higher, Please try again"<<endl;
		}
		
		else if (guess==random)
		{
			cout<<"Your guess is correct, Congrats!"<<endl;	
		}
		
	}	while (guess!=random);

	return 0;
}
