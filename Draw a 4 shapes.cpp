#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	// subtitle
	cout << "***This project is for draw a 4 shapes***" << endl << endl << endl;
	
	// shape
	cout << "		***circle***		" << endl;
	
	// variable
	float radius,k;
	
	cout << " Enter the Radius of the circle size ";
	cin >> radius;//get input
	
	// variable
	float temp_num = 2;

	// the operation
	for (int count = - radius; count <= radius; count++)
	{
		for (int counter = - radius; counter <= radius; counter++)
		{
			k = ((count * temp_num)/ radius) * ((count * temp_num)/ radius) + (counter / radius) * (counter / radius);
			
			if (k > 0.95 && k < 1.08)
			{
				// output
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
	cout << endl << endl << endl << endl;
	
	// shape
	cout << "		***triangle***		" << endl;
	
	// variable
	int triangle;
  	
  	// variables for loop
  	int i, j, h, z, g, r;
  	
  	// incoming
  	cout<<"Enter a number for draw a triangle ";
  	cin>>triangle;
  	
  	// the operation & output
  	for (i=0; i<=triangle; i++) 
  	{
  		for (j=0; j<i; j++) 
  		{
    		cout<<"* ";
    	}
    
		cout<<endl;
  	}
	
	cout << endl << endl << endl << endl;
	
	// shape
	cout << "		***square***		" << endl;
	
	// variable	
	int side;
	
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
	
	cout << endl << endl << endl << endl << endl;
	
	// shape
	cout << "		***rectangle***		" << endl;
	
	// variable
	int width, len;
	
	// incoming
	cout << "Enter a number for length of the Rectangle ";
	cin >> len;
	
	cout << "Enter a number for width of the Rectangle ";
	cin >> width;
	
	// the operation
	for (i = 0; i < len; i++)
	{
		cout << "* ";
	}
	
	cout << endl;
	
	for (j = 0; j < width - 2; j++)
	{
		cout << "*";
		for (z = 0; z < 2 * len - 3; z++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
	
	for (h = 0; h < len; h++)
	{
		cout << "* ";
	}
	
 return 0;

}