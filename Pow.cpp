#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for pow."<<endl;

	/* variable */
	int x;
	
	/* incoming */
	cout<<"Enter a number ";
	cin>>x;
	
	/* output */
	cout<<pow(x,1)<<endl<<pow(x,2)<<endl<<pow(x,3);
	
	return 0;
}