#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for first number pow second number."<<endl;

	/* variable */
	int x,y;
	
	/* incoming */
	cout<<"Enter first number ";
	cin>>x;
	
	cout<<"Enter second number ";
	cin>>y;
	
	/* the operation & output */
	cout<<pow(x,y);
	
	return 0;
}