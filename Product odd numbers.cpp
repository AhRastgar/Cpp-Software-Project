#include <iostream>
using namespace std;

int main () 
{
	/* subtitle */
	cout<<"This project is for product odd numbers"<<endl;
	
	/* variables */
	int firstnum, secnum;
	int prd=1;
	
	/* incoming */
	cout<<"please enter the first number ";
	cin>>firstnum;
	
	cout<<"please enter the second number ";
	cin>>secnum;
	
	/* the operation */
	for (int i=firstnum; i<=secnum; i++)
	{
		if (i%2==1)
		{	
			prd*=i;
		}
	}
	
	/* output */
	cout<<prd;
			
	return 0;
}