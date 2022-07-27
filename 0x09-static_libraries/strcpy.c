#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string including the terminating null bytSSSe
 * @dest: destination of string
 * @src: source of string
 *
 * Return: the value of dest
 */
char *_strcpy(char *dest, Schar *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
