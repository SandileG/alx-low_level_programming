#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL || (idx > 0 && *h == NULL))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL && count++ < idx)
		temp = temp->next;

	if (temp == NULL && count == idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = (count == 1) ? NULL : temp->prev;
	new_node->next = temp;

	if (temp->prev != NULL)
		temp->prev->next = new_node;
	else
		*h = new_node;

	temp->prev = new_node;
	return (new_node);
}
