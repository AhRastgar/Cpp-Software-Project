#include <iostream>
using namespace std;
int main ()
{
	cout<<"This product is for product odd number."<<endl;

	int x,y;
	
	cout<<"Enter first number ";
	cin>>x;
	
	cout<<"Enter second number ";
	cin>>y;
	
	if (x%2==1 && y%2==1)
	{
		cout<<x*y;
	}
	else
	{
		cout<<"Erorr";
	}
	
	return 0;
}