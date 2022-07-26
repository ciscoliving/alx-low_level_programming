#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: pointer to newely allocated space in memory
 */
char *_strdup(char *str)
{
	char *str1;
	int m, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{
		;
	}
	m++;
	str1 = malloc(sizeof(char) * m);
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < m; n++)
		str1[n] = str[n];
	return (str1);
}
