#include <iostream>
#include <cmath>
#include <string.h>
#include <stdlib.h>
using namespace std;

// Function for hexadecimal to decimal
unsigned long Hex_To_Dec(char hex[]) 
{
  char *hexastring;
  int length = 0;
  const int hexabase = 16;     
  unsigned long decinum = 0;
  int i;
  for (hexastring = hex; *hexastring != '\0'; hexastring++) 
	{
      length++;
	}
  hexastring = hex;
  for (i = 0; *hexastring != '\0' && i < length; i++, hexastring++) 
  {
      if (*hexastring >= 48 && *hexastring <= 57) 
	  {  
          decinum += (((int)(*hexastring)) - 48) * pow(hexabase, length - i - 1);
	  }
      else if (*hexastring >= 65 && *hexastring <= 70) 
	  {  
          decinum += (((int)(*hexastring)) - 55) * pow(hexabase, length - i - 1);
	  }
      else if (*hexastring >= 97 && *hexastring <= 102) 
	  {  
          decinum += (((int)(*hexastring)) - 87) * pow(hexabase, length - i - 1);
	  }
      else 
	  {
          cout<<" please enter valid hexadecimal number! \n";
	  }
    }
  return decinum;
}


int main() 
{
	// valiables
	int base_number;
	int choose_base;
	int ch_dec , ch_bin , ch_octa , ch_hexa;
	int convert_hex;
	string hexdecimal_num = "";
	char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int decimal_num, digit, i = 1, j;
	int binory_num[100];
	int octal_num[100];
	int long binorynumber, decimalnumber = 0, remain;
	int count = 1;
	int hexadecimal[1000];
	int  ni = 1, nj = 0, deci = 0;
	int rem;
	int binorynum1;
	int oct_num;
	int in = 0;
	int octnum_value[] = {0,1,10,11,100,101,110,111};
	long temp_num, pp;
	int binum;
	unsigned long decinum;
	char hexa[9];
	int octnum[100];
	
	// incoming
	cout << "enter base of number input :";
	cin >> base_number;

	cout << "choose base of number convert you want :";
	cin >> choose_base;
	
	// the operation for decimal to binary
	digit = decimal_num;
	
	if(base_number == 10 && choose_base == 2)
	{
		// incoming
		cout << "Input a decimal number :";
		cin >> decimal_num;
		
		// the operation
		while (digit != 0)
		{
			binory_num[i++] = digit % 2;
			digit = digit / 2; 
		}
		cout << "the binory number is :";
			for (int j = i - 1; j > 0; j--)
			{
				// output
				cout << binory_num[j];
			}
		cout << endl;
	}
	
	// the operation for decimal to hexadecimal
	if (base_number == 10 && choose_base == 16)
	{
		// incoming
		cout << "Input a decimal number :";
		cin >> decimal_num;
		while (decimal_num > 0)
		{
			convert_hex = decimal_num % 16;
			hexdecimal_num = hex[convert_hex] + hexdecimal_num;
			decimal_num = decimal_num / 16;
		}
		// output
		cout << "the hexadecimal number is :" << hexdecimal_num << endl;
	}
	
	// the operation for decimal to octed
	if (base_number == 10 && choose_base == 8)
	{
		// incoming
		cout << "Input a decimal number :";
		cin >> decimal_num;
		while (digit != 0)
		{
			octal_num[i++] = digit % 8;
			digit = digit / 8;
		}
		cout << "the octal number :";
		for (int j = i-1; j > 0; j--)
		{
			// output
			cout << octal_num[j];
		}
		cout << endl;
	}
	
	// the operation for binory to decimal
	if (base_number == 2 && choose_base == 10)
	{
		// incoming
		cout << "Input a binory number :";
		cin >> binorynumber;
		while (binorynumber != 0)
		{
			remain = binorynumber % 10;
			decimalnumber += remain * count;
			count *= 2;
			binorynumber /= 10; 
		}
		
		// output
		cout << "the decimal number is :" << decimalnumber;
	}
	
	//convert binory to hexadecimal
	if (base_number == 2 && choose_base == 16)
	{
		// incoming
		cout << "Input a binory number :";
		cin >> binorynumber;
		while (binorynumber > 0)
		{
			rem = binorynumber % 2;
			deci += rem * ni;
			ni *= 2;
			binorynumber /= 10;
		}
		ni = 0;
		while (deci != 0)
		{
			hexadecimal[ni] = deci % 16;
			deci /= 16;
			ni++;
		}
		cout << "the hexadecimal number is :";
		for (int nj = ni - 1; nj >= 0; nj--)
		{
			if (hexadecimal[nj] > 9)
			{
				// output
				cout << (char)(hexadecimal[nj] + 55) << endl;
			}
			else
			{
				cout << hexadecimal[nj];
			}
		}
	}
	
	// the operation for binory to octal
	if (base_number == 2 && choose_base == 8)
	{
		// incoming
		cout << "Input a binary number :";
		cin >> binorynumber;
		while(binorynumber > 0)
		{
			rem = binorynumber % 10;
			deci += rem * ni;
			ni *= 2;
			binorynumber /= 10;
		}
		ni = 1;
		digit = deci;
		
		while(digit > 0)
		{
			octal_num[ni++] = digit % 8;
			digit = digit / 8;
		}
		cout << "the octal number is :";
		for (int nj = ni - 1; nj > 0; nj--)
		{
			// output
			cout << octal_num[nj];
		}
	}
	
	// the operation for octal to decimal
	if (base_number == 8 && choose_base == 10)
	{
		// incoming
		cout << "Input octal number :";
		cin >> oct_num;
		while (oct_num != 0)
		{
			decimalnumber += ((oct_num % 10) * pow(8,in++));
			oct_num /= 10;
		}
		
		// output
		cout << "the decimal number is :" << decimalnumber << endl;
	}
	
	// the operation for octal to binory
	if(base_number == 8 && choose_base == 2)
	{
		// incoming
		cout << "Input octal number :";
		cin >> oct_num;
		temp_num = oct_num;
		binum = 0;
		pp = 1;
		while (temp_num != 0)
		{
			rem = temp_num % 10;
			binum = octnum_value[rem] * pp + binum;
			temp_num /= 10;
			pp *= 1000;
		}
		
		// output
		cout << "the binory number is :" << binum;
	}
	
	// the operation for octal to hexadecimal
	if (base_number == 8 && choose_base == 16)
	{
		// variables
		int x,k,l,h;
		int fr,flg;
		int firstarray[20] , secondarray[20] , thirdarray[20];
		int a,b,c,d,e,f,n1,n3;
		float remain1,n2,n4;
		char octal_number[20];
		int new_num;
		x = fr = flg = rem = 0;
		remain1 = 0.0;
		
		// incoming
		cout << "Input octal number :";
		cin >> octal_number;
		
		// the operation
		for (int i = 0, j = 0, k = 0; i < strlen(octal_number); i++)
		{
			if(octal_number[i] == '.')
			{
				flg = 1;
			}
			else if (flg == 0)
			{
				firstarray[j++] = octal_number[i] - 48; 
			}
			else if (flg == 1)
			{
				secondarray[k++] = octal_number[i] - 48;
			}
		}
		x = j;
		fr = k;
		for (int j = 0, i = x; j < x; j++ , i--)
		{
			rem += (firstarray[j] * pow(8,i));
		}
		for(k = 0, i = 1; k < fr; k++ , i++)
		{
			remain1 += (secondarray[k] / pow(8,i));
		}
		remain1 += rem;
		new_num = remain1;
		n1 = new_num;
		n2 = new_num - n1;
		i = 0;
		
		while(n1 != 0)
		{
			rem = n1 % 16;
			thirdarray[i] = rem;
			n1 /= 16;
			i++;
		}
		
		j = 0;
		
		while(n2 != 0.0)
		{
			n2 *= 16;
			n3 = n2;
			n4 = n2 - n3;
			n2 = n4;
			firstarray[j] = n3;
			j++;
			if (j == 4)
			{
				break;
			}
		}
		
		l = i;
		
		// output
		cout << "the hexadecimal number is :";	
		for (int i = l - 1; i >= 0; i--)
		{
			if (thirdarray[i] == 10)
			{
				cout << "A";
			}
			else if (thirdarray[i] == 11)
			{
				cout << "B";
			}
			else if (thirdarray[i] == 12)
			{
				cout << "C";
			}
			else if (thirdarray[i] == 13)
			{
				cout << "D";
			}
			else if (thirdarray[i] == 14)
			{
				cout << "E";
			}
			else if (thirdarray[i] == 15)
			{
				cout << "F";
			}
			else
			{
				cout << thirdarray[i];
			}
		}
		
		h = j;
		
		// output
		cout << ".";
		for (int k = 0; k < h; k++)
		{
			if(firstarray[k] == 10)
			{
	        	cout << "A";
	    	}
	        else if (firstarray[k] == 11)
	        {
	           cout << "B";
	     	}
	        else if (firstarray[k] == 12)
	        {
	           cout << "C";
	       	}
	        else if (firstarray[k] == 13)
	        {
	           cout << "D";
	       	}
	        else if (firstarray[k] == 14)
	        {
	           cout << "E";
	     	}
	        else if (firstarray[k] == 15)
	        {
	           cout << "F";
	    	}
	        else
	        {
	        cout << firstarray[k];
	    	}
		}
		
	}
	
	// the operation for hexadecimal to decimal
	if (base_number == 16 && choose_base == 10)
	{
		// incoming
		cout << " Input hexadecimal number: ";  
	    cin>>hex;
	 	decinum = Hex_To_Dec(hex);
	 	
	 	// output
	 	cout<<" The decimal number is: "<<decinum<<"\n";
	}
	
	// the operation
	if(base_number == 16 && choose_base == 2)
	{
		// variables
		unsigned long dnum;
		char hex[9];
		int dec_num, rem=1, m, n;
		int bin_num[100],quot;
		dec_num=0;
		
		// incoming
		cout << " Input Hexadecimal Number: ";  
	    cin>>hex;
	    
	    // the operation
	    dnum = Hex_To_Dec(hex);
	    quot = dnum;
    
		cout<<" The  binary number is: ";
        while(quot != 0)
	    {
	        bin_num[m++] = quot % 2;
	        quot = quot/2;
		}
	    for(n=m-1; n>=0; n--)
	    {
	        dec_num=(dec_num*10)+bin_num[n];
	    }
	    
	    // output
		cout<<dec_num<<endl;
		cout<<endl;
	}
	
	// the operation for hexadecimal to octal
	if (base_number == 16 && choose_base == 8)
	{
		// variables
		unsigned long dnum;
		char hex[9];
		int dec_num, rem=1, m, n;
		int oct_num[100],digiti;
		
		// operation
		dec_num=0;
		
		// incoming
		cout << " Input  hexadecimal Number: ";  
	    cin>>hex;
	    dnum = Hex_To_Dec(hex);
	    digiti = dnum;
	    
	    // the operation
	    cout<<" The octal number is: ";
		digiti = dnum;
	    while(digiti != 0)
	    {
	        oct_num[m++] = digiti % 8;
	        digiti = digiti/8;
	    }
	    for(n=m-1; n>=0; n--)
		{
			// output
	        cout<<oct_num[n];
	    }
		cout<<"\n";
	}
	return 0;
}