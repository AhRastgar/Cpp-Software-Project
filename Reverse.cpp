#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
const int n=20;
//-----------------------------------------------تابع معکوس کردن رشته---------------------------------
char * ReverseString(char s[],char y[])
{
  
   int k=0;
   for(int i=strlen(s)-1;i>=0;i--)
	  { y[k]=s[i];
        ++k;
     }
   y[k]='\0';
   return y;
}
//------------------------------------------تابع اصلی------------------------
void main()
  {
	  char  s[n]; char y[n];
	  cin.getline(s,20);
	  cout<<ReverseString(s,y);
 _getch();
  }