#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This porject is for Stars the size of numbers."<<endl;
	
	/* variables */
	int x, i;
	
	/* incoming */
	cout<<"Enter a number for creat stars ";
	cin>>x;
	
	/* the operation & output */
	for (i=0; i<x; i++)
	{
		cout<<'*';
	}
	
	return 0;
}