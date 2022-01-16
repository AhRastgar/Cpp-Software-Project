#include <iostream>
using namespace std;
int main ()
{
	// subtitle
	cout<<"This project is for symmetrical number."<<endl;
	// variables
	int incomingNum, stashNumMod, incomingNumReverse=0;
	
	// incoming
	cout<<"Enter a number for check symmetrical number ";
	cin>>incomingNum;
	
	// variables
	int incomingNumStash=incomingNum;
	
	// the operations
	if (incomingNum>0)
	{
		while (incomingNum>0)
		{
	    	stashNumMod=incomingNum%10;
	    	incomingNum=incomingNum/10;
	    	
			incomingNumReverse=incomingNumReverse*10+stashNumMod;
		}
	}
	
	// output
	if (incomingNumStash==incomingNumReverse)
	{
    	cout<<"This number is a symmetrical number.";
	}
	else
	{
    	cout<<"This number isn't a symmetrical number.'";
	}
	
	return 0;
}