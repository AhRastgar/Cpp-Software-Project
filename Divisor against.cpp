#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for Divisor against."<<endl;
	
	/* variables */
	int x, num;
	
	/* variables for loop */
	int i, sum;
	
	/* incoming */
	cout<<"Enter a number ";
	cin>>x;
	
	/* the operation */
	num=x;
	sum=0;
	
	for (i=1; i<=x; i++)
	{	
		if (num%i==0)
		{
			cout<<"Divide by your number is "<<i<<endl;
		}
	}
	
	return 0;
}