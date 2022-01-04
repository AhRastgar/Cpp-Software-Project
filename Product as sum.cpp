#include <iostream>
using namespace std;
int main ()
{
	cout<<"This project is for produt as sum."<<endl;
	
	int x,y,i,sum;
	sum=0;
	
	cout<<"Enter first number ";
	cin>>x;
	cout<<"Enter second number ";
	cin>>y;
	
	for (i=0; i<=y; i++)
	{
		sum+=x;
	}
	
	cout<<"Product as sum= "<<sum;
	
	return 0;
}