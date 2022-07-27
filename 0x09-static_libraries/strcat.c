#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src.
 * @dest: Stands for destination
 * @src: Stands for source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
