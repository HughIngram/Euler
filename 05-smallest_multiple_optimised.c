/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */
#include <stdio.h>

int main()
{
	int x = 2520, a =20;
	while (a >= 2)
	{
		if (x % a ==0)
			a++;
		else 
		{
			x++;
			a = 20;
		}
	}
	printf("\n%i\n",x);
}

