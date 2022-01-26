#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for Descending & Ascending."<<endl;
	
	// variables
	int x, y, min, max;
	
	// variables for loop
	int i, j, h;
	
	// incoming
	cout << "Enter a number for number of numbers ";
	cin >> x;
	
	// variables for array
	int num [x];
	
	// the operations
	for (i = 0; i < x; i++)
	{
		cout << "Enter a number for set Descending & Ascending ";
		cin >> num [i];
	}
	
	min = num [0];
	
	for (j = 0; j < x; j++)
	{
			min = num [j];
			cout << "Descending= " << min << endl;
	}
	
	max = num [x-1];
	
	for (h = x-1; h >= 0; h--)
	{
			max = num [h];
			cout << "Ascending= " << max << endl;
	}
	
	return 0;
}