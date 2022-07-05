#include "main.h"

/**
 * _islower - Checking if a character is lowercase.
 * @c: checking if there are printed lower case.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
