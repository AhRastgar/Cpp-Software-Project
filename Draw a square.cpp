#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This projece is for draw a square."<<endl;
	
	/* variables */
	float x;
	
	/* incoming */
	cout<<"Enter the side of the square ";
	cin>>x;
	
	/* the operation */
	
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<x; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}