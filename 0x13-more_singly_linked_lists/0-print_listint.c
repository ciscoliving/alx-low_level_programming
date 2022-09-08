#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t
 * @h: points to start of list
 * Return: size_t (number of nodes)Return: size_t (number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int i = 0;

	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->n)
		{
			printf("%d\n", tmp->n);
		}
		tmp = tmp->next;
		i++;
	}
	return (i);
}
