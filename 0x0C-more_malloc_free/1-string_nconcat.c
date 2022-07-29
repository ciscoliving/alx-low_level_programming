#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fonction concatenate strings
 * @s1: string
 * @s2: string
 * @n: integer
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l, a = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";


	for (k = 0; s1[k]; k++)
		;
	for (l = 0; s2[l]; l++)
		;

	if (l > n)
		l = n;

	c = malloc ((sizeof(char) * k) + (sizeof(char) * l) +1);

	if (c == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (a < l + k)
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[k + l] = '\0';

	return (c);
}
