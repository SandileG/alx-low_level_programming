#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index in doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion os successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/* Check if the list is empty. */
	if (*head == NULL)
		return (-1);

	/* If the node to be deleted is the head. */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node at the given index. */
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	/* If the index is out of bounds. */
	if (current == NULL)
		return (-1);

	/* Update the links to bypaass the node to be deleted. */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
