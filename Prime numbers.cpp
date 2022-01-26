#include <iostream> 
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for Prime numbers." << endl;
	
	// variables
	int a, b;
	
	// variables for loop
	int i;
	
	// incoming
	cout << "Enter a number for check ";
	cin>>a;
	
	// the operation
	b=0;
	
	for(i=2; i<a; i++)
	{
    	if (a%i==0)
    	{
    	b=1;
    	}
	}
	
	// output
	if (b==0)
	{
		cout<<"yes";
	}
	else
	{
    	cout<<"no";
	}
	
	return 0; 
}