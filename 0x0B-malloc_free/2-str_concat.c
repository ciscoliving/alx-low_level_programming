#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int j, k, n = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (j = 0; j < s1[j]; j++)
		;
	for (k = 0; k < s2[k]; k++)
		;
	c = malloc((sizeof(char) * j) + (sizeof(char) * k) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		c[n] = *s1;
		s1++;
		n++;
	}
	while (*s2 != '\0')
	{
		c[n] = *s2;
		s2++;
		n++;
	}
	c[n] = '\0';
	return (c);
}
