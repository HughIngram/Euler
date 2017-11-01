/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

#include <stdio.h>

int digits[6], n, x, isFound=0;
int main(void)
{	
	for (digits[0]=9 ; isFound==0; digits[0]-- )
	{	
		for (digits[1]=9 ; digits[1] >=0; digits[1]-- )
		{ 	
			for (digits[2]=9 ;  digits[2] >= 0; digits[2]-- )
			{
				makePalindrome();
				checkIfProduct();
			}
		}
	}
	return 0;
}	

int makePalindrome(void)
{
	digits[5]=digits[0];
	digits[4]=digits[1];
	digits[3]=digits[2];
	
	n = digits[0] + (digits[1]*10) + (digits[2]*100) + (digits[3]*1000) + (digits[4]*10000) + (digits[5]*100000);
}

int checkIfProduct(void)
{
	for ( x=999 ; x > 100 ; x-- )
		if ( n % x == 0 )
		{
			printf("%i * %i = %i\n", n/x  , x  , n);
			isFound = 1;
		}
}
/*
	reverse the digits - abc - n[3]x100 + n[2]x10 + n[1]
	n = abccba

	generate values for a descending from 999 while found = 1 and a > 0
	{
		if ( n % a == 0 )
			found = 0	
	}
	
	print n
*/

