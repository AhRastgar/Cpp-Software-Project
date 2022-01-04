#include <iostream>
using namespace std;
int main ()
{
	/* Subtitle */
	cout<<"This project is for division as submission."<<endl<<endl;
	
	/* Variables */
	int x,y,i,a,mod;
	
	/* Incoming */
	cout<<"Enter first number ";
	cin>>x;
	cout<<"Enter second number ";
	cin>>y;
	
	/* the operation */
	mod=x;
	a=0;
	
	for (i=0; ; i++)
	{
		if (mod>=y)
		{
			a++;
			mod-=y;
		}
		else
		{
			break;
		}
	}
	
	/* Output */
	cout<<"Outside the split part= "<<a<<endl<<"Divide remaining= "<<mod;
	
	return 0;
}