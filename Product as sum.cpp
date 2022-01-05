#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for produt as sum."<<endl;
	
	/* variable */
	int x,y,i,sum;
	sum=0;
	
	/* incoming */
	cout<<"Enter first number ";
	cin>>x;
	cout<<"Enter second number ";
	cin>>y;
	
	/* the operation */
	for (i=0; i<=y; i++)
	{
		sum+=x;
	}

	/* output */
	cout<<"Product as sum= "<<sum;
	
	return 0;
}