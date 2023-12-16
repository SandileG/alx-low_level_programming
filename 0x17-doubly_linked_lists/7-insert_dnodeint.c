#include "lists.h"

/**
 * insert_dnodeint_at_index - Add new node at index in doubly linked list.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node on success, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	/* If the index is 0, insert at the beginning of the list. */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to reach the desired position. */
	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	/* If the desired position is at the end, insert at the end of the list. */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node. */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Set the value of the new node and update the links. */
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
