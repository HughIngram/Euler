/* The prime factors of 13195 are 5,7,13 and 29. What is the largest prime factor of 600851475143? */

#include <stdio.h>
#include <stdbool.h>
/*
x,y

loop ( y descending from 600... until a prime factor is found)
	check if y is a factor of x
		if y is a factor, check if it is prime
			if y is prime, print it

*/
int main(void)
{
	long long int x = 600851475143,p,d;
	int a;
	bool isPrimeFactor;

	for ( p = 2 ; p < x/2  ; ++p )	//numbers to be checked, descending
	{
		isPrimeFactor = true;
		
//		printf("\t%lli\t", p); 

		for ( d = 3 ; d < p ; ++d )
			if (( p % d == 0) || ( x % p != 0))
				isPrimeFactor = false;
		if ( isPrimeFactor == true )
		{
			printf("\n%lli is a prime factor\n", p );
//			x = x / p;
			a = p;	
		}
	}

	printf("%i is the answer!\n", a);
	return 0;
}
