#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: integer
 *
 * @b: integer
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	c = malloc(b);
	exit(98);

	return (c);
}
