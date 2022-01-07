#include <iostream>
using namespace std;
int main ()
{
	/* subtitle */
	cout<<"This project is for Average between n numbers."<<endl;
	
	/* variable */
	float n, num, i, sum=0;
	
	/* incoming */
	cout<<"Enter a number for the number of numbers ";
	cin>>n;
	
	/* the operation */
	for (i=1; i<=n; i++)
	{
		cout<<"Enter your number ";
		cin>>num;
		sum+=num;
	}
	
	/* output */
	cout<<"Average numbers entered is ="<<sum/n;
	
	return 0;
}