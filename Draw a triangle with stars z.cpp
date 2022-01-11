#include <iostream>
using namespace std;
int main()
{
	// subtitle
	cout<<"This project is for Draw a triangle with stars Z."<<endl;
	
	// variables
	int x;
	
	// variables for loop
	int i, j;
	
	// incoming
	cout<<"Enter a number for draw a triangle ";
	cin>>x;
	
	// the operation & output
	for (i=x; i>0; i--) 
	{
		for (j=0; j<i; j++) 
  		{
    	cout<<"* ";
    	}
		
		cout<<endl;
	}
	cout<<endl;
	
	return 0;
}