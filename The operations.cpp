#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	// subtitle
	cout<<"This project is for mininmum, maximum, sum, average, standard deviation."<<endl;
	
	// variables
	int a, b;
	
	// variables for loop
	int i, j;
	
	// variables for operation
	int sum, avg, min, max, stdDev, stash, sum2, firstInit;
	
	// incoming
	cout<<"Enter a number for number of numbers ";
	cin>>a;
	
	// variables for array
	int firstArray[a];
	
	// the operation
	stash=0;
	sum=0;
	avg=0;
	firstInit=0;
	
	for (i=0; i<a; i++)
	{
		cout<<"Enter a number for operations ";
		cin>>b;
		
		firstArray[i]=b;
		
		if (firstInit==0)
		{
			min=firstArray[0];
			max=firstArray[0];
			
			firstInit=1;
		}
		
		if (firstArray[i]<min)
		{
			min=firstArray[i];
		}
			
		if (firstArray[i]>max)
		{
			max=firstArray[i];
		}
		
		sum+=b;
	}
	
	avg=sum/a;
	
	for (j=0; j<a; j++)
	{
		stash=firstArray[j]-avg;
		sum2+=pow (stash, 2);
		stdDev=sqrt (sum2/5);
	}
	
	cout<<"minimum= "<<min<<endl<<"maximum= "<<max<<endl<<"sum= "<<sum<<endl<<"average= "<<sum/a<<endl<<"standard deviation= "<<stdDev;
	
	return 0;
}