#include<iostream>
using namespace std;
int main ()
{
	int r;
	char p=3.14;
	
	cout<<"Enter the radius of the circle ";
	cin>>r;
	
	cout<<"circle diameter= "<<r*2;
	cout<<"perimeter of the circle= "<<2*p*(r*r);
	cout<<"circle area= "<<p*(r*r);
	
	return 0;
}