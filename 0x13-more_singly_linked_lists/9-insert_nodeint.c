#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at given index. Index start at 0
 * @head: Pointer to the pointer to the start of the list
 * @n: The value to assign to the data of the node
 * @idx: The index of the listint_t list where the new node should be added
 * Description:the index position to add the node
 *
 * Return: Address of the new node, or NULL if it fails or a node cannot be
 * added at the given index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
