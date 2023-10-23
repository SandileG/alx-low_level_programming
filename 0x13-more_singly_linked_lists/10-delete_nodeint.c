#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at indext of a listint_t
 * linked list.
 * @head: Pointer to a pointer tha points to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if if succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (count < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
		count++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
