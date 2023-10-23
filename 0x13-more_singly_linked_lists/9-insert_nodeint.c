#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer that points to the head of the list.
 * idx: Index of the list where the new node should be added.
 * Index starts at 0.
 * @n: Value to be added to the node.
 * Returns: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (count < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		count++;
	}


	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
