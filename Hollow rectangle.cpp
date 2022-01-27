#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for hollow Rectangle." << endl;
	
	// variable
	int length, width;
	
	// variable for loop
	int i, j, z, h;
	
	// incoming
	cout << "Enter a number for length of the Rectangle ";
	cin >> length;
	
	cout << "Enter a number for width of the Rectangle ";
	cin >> width;
	
	// the operation
	for (i = 0; i < length; i++)
	{
		cout << "* ";
	}
	
	cout << endl;
	
	for (j = 0; j < width - 2; j++)
	{
		cout << "*";
		for (z = 0; z < 2 * length - 3; z++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	
	for (h = 0; h < length; h++)
	{
		cout << "* ";
	}
	
	return 0;
}