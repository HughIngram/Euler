/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

// a is the count of prime numbers (up to 10 001)
// x is the prime numbers
// n is the number that x is %'d by to test primality
// isPrime is boolean

#include <stdio.h>
// x is the number being tested & printed when it is prime
// n is the number that tests if x is prime
int main(void)
{
	int x=1, n, isPrime, primeCount=0;
	while ( primeCount <= 10001 )
	{
		isPrime = 1;
		n = 2;
		while (isPrime == 1 && n < x)
		{	if ( x % n == 0 )
				isPrime = 0;
			n++;
		}	
		if (isPrime == 1)
		{
			printf("\nPrime number %i is %i",primeCount, x);
			primeCount++;
		}
		x++;
	}
	return 0;
}
