/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <stdio.h>
int sum=0, sumOfSquares=0, squareOfSum=0, n;

int main(void)
{
	for ( n = 1 ; n <= 100 ; n++ )
	{
		sumOfSquares += n*n;
		sum += n;
	}
	printf("\nsumOfSquares = %i\nsum = %i\nsum*sum = %i\n", sumOfSquares, sum, sum*sum);
	printf("\nDifference = %i\n", (sum*sum)-sumOfSquares );
	return 0;
}

