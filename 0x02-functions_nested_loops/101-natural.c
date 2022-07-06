#include <stdio.h>

/**
 * main -list down all natural numbers 1024, except the multiples of 3 and 5.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int d, sum = 0;

	for (d = 0; d < 1024; d++)
	{
		if ((d % 3) == 0 || (d % 5) == 0)
			sum += d;
	}
	printf("%d\n", sum);
	return (0);
}
