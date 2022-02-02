#include <iostream>
using namespace std;

// function for square
void square (int lenght)
{
	// variables
	int loop1, loop2;
	
	// the operation
	for (loop1 = 1; loop1 <= lenght; loop1++) 
	{
		for (loop2 = 1; loop2 <= lenght; loop2++) {
			if (loop1 == loop2)
			{
				// output in function
				cout << "* ";
			}
			else if (loop2 == (lenght + 1) - loop1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		
		cout << endl;
	}

}

// main function
int main ()
{
	// variables
	int lenght;
	
	// incoming
	cout << "Please enter the Square Lenght: ";
	cin >> lenght;
	
	// output
	square(lenght);

	return 0;
}