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
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
