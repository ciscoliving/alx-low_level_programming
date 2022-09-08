#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Add up all the data, integers, from a list
 * @head: Pointer to the start of the list
 *
 * Return: The sum of all data, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}
	return (amount);
}
