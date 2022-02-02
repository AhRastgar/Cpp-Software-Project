#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout << "This project is for national conditions" << endl;
	
	// variables
	int nationalCode;
	
	// incoming
	cout << "Enter a national code ";
	cin >> nationalCode;
	
	// the operation
	if (nationalCode == 1111111111 || nationalCode == 2222222222 || nationalCode == 3333333333 || nationalCode == 4444444444 || nationalCode == 5555555555 || nationalCode == 6666666666 || nationalCode == 7777777777 || nationalCode == 8888888888 || nationalCode == 9999999999)
	{
		cout << "Erorr";
	}
	
	
	
	return 0;
}