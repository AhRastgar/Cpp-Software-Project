#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for draw a Rectangle."<<endl;
	
	/* variables */
	int lenght, width;
	
	/* variables for loop */
	int i,j;
	
	/* incoming */
	cout<<"Enter a number for lenght ";
	cin>>lenght;
	
	cout<<"Enter a number for width ";
	cin>>width;
	
	/* the operation */
	cout<<endl;
	
	for (i=0; i<width; i++)
	{
		for (j=0; j<lenght; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}