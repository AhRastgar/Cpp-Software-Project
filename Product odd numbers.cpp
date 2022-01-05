#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This product is for product odd number."<<endl;

	/* variable */
	int x,y;
	
	/* incoming */
	cout<<"Enter first number ";
	cin>>x;
	
	cout<<"Enter second number ";
	cin>>y;
	
	/* the operation */
	if (x%2==1 && y%2==1)
	{
		/* output */
		cout<<x*y;
	}
	else
	{
		cout<<"Erorr";
	}
	
	return 0;
}