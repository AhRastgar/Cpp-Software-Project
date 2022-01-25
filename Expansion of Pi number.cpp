#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for Expansion of Pi number." << endl;
	
	// variables
	float radius, circumference, pi;
	char p = 3.14;
	
	// incoming
	cout << "Enter a number for radius ";
	cin >> radius;
	
	// the operation
	circumference = 2 * p * radius;
	
	pi = circumference / radius;
	
	// output
	cout << "The expansion of Pi number is = " << pi;
	
	return 0;
}