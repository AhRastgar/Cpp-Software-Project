#include <iostream>
using namespace std;
int main ()
{
	int x,y;
	
	cout<<"Enter 2 number ";
	cin>>x>>y;
	
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