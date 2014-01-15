/* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */

#include <stdio.h>

int main(void)
{

	int i=0, j=1, temp, sum=0;

	while ( j < 4000000 )
	{
		if ( j % 2 == 0 )
		{	sum = sum + j;
		}

		i += j;		//i becomes the next fibonacci number

		temp = i;	//swap i and j
		i = j;
		j = temp;
	}

	printf("\nThe sum of the even Fibonaci numbers below 4 000 000 is: %i\n\n", sum);
	return 0;
}
