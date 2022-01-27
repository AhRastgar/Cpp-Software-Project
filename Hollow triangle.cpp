#include <iostream>
#include <string>
using namespace std;
int main()
{
	// subtitle
	cout << "This project is for draw a hollow tringle." << endl;
	
	// variables
	int length, u, d;
	char dir;
	
	// variables for loop
	int i, j, h, g, z, r;
	
	// incoming
	cout << "Enter a number for length ";
	cin >> length;
	
	cout << "Enter u or d for direction (u=up, d=down)";
	cin >> dir;
	
	// the operation
	if (dir == 'u')
	{
		for (i = 1; i <= length - 1; i++)
		{
			cout << "*";
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					cout << "  ";
				}
			}
			
			if (i > 0)
			{
				cout << "*" << endl;
			}
			else
			{
				cout << endl;
			}
		}
		
		for (h = 0; h < length; h++)
		{
			cout << "* ";
		}
	}
	
	if (dir == 'd')
	{
		for (z = 0; z < length; z++)
		{
			cout << "* ";
		}
		
		cout << endl;
			
		for (r = length - 1; r > 0; r--)
		{
			cout << "*";
			if (r < length + 2)
			{
				for (g = 0; g < r-1; g++)
				{
					cout << "  ";
				}
			}
		
			if (r < length + 2)
			{
				cout << "*" << endl;
			}
			else
			{
				cout << endl;
			}
		}
	}
	
    return 0;
}