#include<iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for radius of the circle."<<endl;

	/* variable */
	int r;
	char p=3.14;
	
	/* incoming */
	cout<<"Enter the radius of the circle ";
	cin>>r;
	
	/* the operation & output */
	cout<<"circle diameter= "<<r*2;
	cout<<"perimeter of the circle= "<<2*p*(r*r);
	cout<<"circle area= "<<p*(r*r);
	
	return 0;
}