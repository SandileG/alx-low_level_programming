#include "lists.h"

/**
 * insert_dnodeint_at_head - Inserts a new node at the head of the list.
 * @h: Pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
static dlistint_t *insert_dnodeint_at_head(dlistint_t **h, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *h;
	if (*h)
	{
		(*h)->prev = new_node;
	}
	*h = new_node;

	return (new_node);
}

/**
 * traverse_to_index - Traverses the list to a given index.
 * @h: Head of the list.
 * @idx: Target index.
 *
 * Return: Pointer to the node at the given index, or NULL if out of bounds.
 */
static dlistint_t *traverse_to_index(dlistint_t *h, unsigned int idx)
{
	unsigned int count = COUNT_INIT;
	while (h && count < idx)
	{
		h = h->next;
		count++;
	}
    return ((count == idx) ? h : NULL);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (!h || idx > 0 && !*h)
	{
		return (NULL);
	}

	if (!idx)
	{
		return (insert_dnodeint_at_head(h, n));
	}

	dlistint_t *prev = traverse_to_index(*h, idx - 1);
	if (!prev)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = prev->next;
	new_node->prev = prev;
	if (prev->next)
	{
		prev->next->prev = new_node;
	}
	prev->next = new_node;

	return (new_node);
}
