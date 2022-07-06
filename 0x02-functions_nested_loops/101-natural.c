#include <stdio.h>

/**
 * main -list down all natural numbers 1024, except the multiples of 3 and 5.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int f, sum = 0;

	for (f = 0; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
			sum += f;
	}
	
	printf("%d\n", sum);

	return (0);
}
