#include "main.h"

/**
 * print_to_98 - Prints all intergers from 0 to 98
 * @n: This is the first integer which is 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
