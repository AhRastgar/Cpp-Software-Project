#include <iostream>
using namespace std;
int main() 
{
	// subtitle
	cout << "This project is for draw a hollow square." << endl;
	
	// variable	
	int side;
	
	// variables for loop
	int i, j, h, z;
	
	// incoming
	cout << "Enter a number for side of the square ";
	cin >> side;
	
	// the operation & output
	for (i = 0; i < side; i++)
	{
		cout << "* ";
	}
	
	cout << endl;
	
	for (h = 0; h < side-2; h++)
	{
		cout << "*";
		
		for (j = 0; j < 2*side-3; j++)
		{
			cout << " ";
		}
		
		cout << "*" << endl;
	}
	
	for (z = 0; z < side; z++)
	{
		cout << "* ";
	}
	
	return 0;
}