#include <iostream>
#include <cmath>
using namespace std; 
int main ()
{
	/* subtitle */
	cout<<"This porject is for golden number."<<endl;
	
	/* variables */
	int x;
	
	/* incoming */
	cout<<"Enter a number ";
	cin>>x;
	
	/* the operation & output */
	cout<<"If the number you give is the length, the ratio is= "<<x/1.618<<endl;
	cout<<"if the number you give is the width, the ratio is= "<<x*1.618;
	
	return 0;
}