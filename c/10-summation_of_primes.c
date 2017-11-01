/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long long int sum=5, p, i, primeIndex=2, primes[1000000]; 
	bool isPrime;

	primes[0] = 2;
	primes[1] = 3;
// for ; primeIndex <=2 000 000
	for ( p = 5 ; p < 2000000 ; p += 2 )
	{
		isPrime = true;

		for ( i = 1 ; isPrime && p / primes[i] >= primes[i] ; ++i ) 
			if ( p % primes[i] == 0 )
				isPrime = false;

		if ( isPrime == true )
		{
			primes[primeIndex] = p;
			if ( primeIndex % 10000 == 0 )
				printf("Prime number %7llu is %8llu\n", primeIndex , p );
			++primeIndex;
			sum += p;
		}
	}


	printf("\nSum of primes under 2 000 000 is %llu\n",sum);
	printf("\n");
	return 0;
}
