#include <iostream>
using namespace std;
	
	int main()
	
{ 		int num1,num2; 
		char x;
		
	  	cout<<"Enter first number:"<<endl;
		cin>>num1;
		cout<<"Enter second number:"<<endl;
		cin>>num2;
		
		cout<<"Press + for addition"<<endl;
		cout<<"Press - for subtraction"<<endl;
		cout<<"Press * for multiplication"<<endl;
		cout<<"Press / for division"<<endl;

		cin>>x; 

		if (x=='+')		
		cout<<"Answer = "<<num1 + num2<<endl; // Addition
		
		else if (x=='-')
		cout<<"Answer ="<<num1 - num2<<endl; // Subtraction
		
		else if (x=='*')
		cout<<"Answer ="<<num1 * num2<<endl; // Multiplication
		
		else if (x=='/')
		cout<<"Answer ="<<num1 / num2<<endl; // Division
			
		else 
		cout<<"Invalid Operation"<<endl;

	return 0;
}

