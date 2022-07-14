#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: stands for destination
 * @src: stands for source
 * @n: integer
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
