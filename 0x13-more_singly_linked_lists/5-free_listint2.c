#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free all nodes from a list, and set head to NULL
 * @head: Pointer to the pointer to the start of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;


	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
