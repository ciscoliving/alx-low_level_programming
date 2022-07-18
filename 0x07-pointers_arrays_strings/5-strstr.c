#include "main.h"

/**
 * _strstr - find the first occurence
 * @haystack: string
 * @needle: string
 *
 * Return: the pointer to the first occurence  of the located substring.
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			}
			 while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
