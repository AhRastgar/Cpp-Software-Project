#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout<<"This project is for symmetrical number."<<endl;
	// variables
	int incomingNum, stashNumMod, incomingNumReverse=0, doubleReverse=0;
	char symbol;
	
	// incoming
	cout<<"Enter a number for enable format ";
	cin>>incomingNum;
	
	cout<<"Enter a symbol for drop between numbers ";
	cin>>symbol;
	
	// variables
	int incomingNumStash=incomingNum;
	
	// the operations	
	while (incomingNum>0)
	{
		stashNumMod=incomingNum%10;
		incomingNum=incomingNum/10;
		incomingNumReverse=incomingNumReverse*10+stashNumMod;
	}

	
	while (incomingNumReverse>0)
	{
		stashNumMod=incomingNumReverse%10;
		incomingNumReverse=incomingNumReverse/10;
	
		// output	
		cout<<stashNumMod<<symbol;
	}
	
	
	return 0;
}