#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the first item in a list
 * @head: Pointer to the pointer to the start of the list
 *
 * Return: The value stored in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);


	return (n);
}
