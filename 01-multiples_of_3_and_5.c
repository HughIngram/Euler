//program to sum the multiples of 3 and 5 below 1000

#include <stdio.h>

int main(void)
{
	int n = 0, sum, remainder;
	sum = 0;

	while ( n < 1000 )
	{
		if ( n % 3 == 0 )
			sum += n;

		else
		{	if ( n % 5 == 0 )
				sum += n;
		}

		n++;
	}

	printf("\n\n%i\n\n", sum);

	return 0;
}
