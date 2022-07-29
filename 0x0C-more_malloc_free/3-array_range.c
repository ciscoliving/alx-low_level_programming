#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *j, k, y, x = 0;
	k = max - min + 1;

	if (min > max)
		return (NULL);

	j = malloc(sizeof(int) * k);

	if (j == 0)
		return (NULL);

	y = min;
	for (x = 0; x < k; x++)
	{
		j[x] = y;
		y++;
	}

	return (j);
}
