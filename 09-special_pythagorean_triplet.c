/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
////////////////////////////////////////////
/*
First generate ascending values of C while a + b + c <= 1000
Start with a = 1
	

if a*a + b*b == c*c
	print a, b, c, abc

*/

#include <stdio.h>
int main(void)
{
	int a,b,c,complete=0;
	
	for ( c = 3 ; complete==0 ; c++ )
	{
		for ( b = 2 ; b < c ; b++ )
		{
			for ( a = 1 ; a < b ; a++ )
			{	
				if ( (a*a)+(b*b) == (c*c) && a+b+c==1000 )
				{
					printf("\n%i^2 + %i^2 = %i^2\nabc = %i\n\n", a , b , c, a*b*c );
					complete=1;
				}
			}
		}
	}
	return 0;
}
