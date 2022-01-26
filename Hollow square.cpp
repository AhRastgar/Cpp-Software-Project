#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for hollow square." << endl;
	
	// variable
	int num;
	
	// variable for loop
	int i, j, z, h;
	
	// incoming
	cout << "Enter a number for side of the square ";
	cin >> num;
	
	// the operation
	for (i = 0; i < num; i++)
	{
		cout << "* ";
	}
	
	cout << endl;
	
	for (j = 0; j < num-2; j++)
	{
		cout << "*";
		for (z = 0; z < 2*num-3; z++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	
	for (h = 0; h < num; h++)
	{
		cout << "* ";
	}
	
	return 0;
}