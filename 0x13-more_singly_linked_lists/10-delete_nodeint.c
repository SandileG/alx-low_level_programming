#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *acting = *head;
	listint_t *fleeting = NULL;

	unsigned int v = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(acting);
	return (1);
	}

	while (v < index - 1)
	{
	if (!acting || !(acting->next))
	return (-1);
	acting = acting->next;
	v++;
	}


	fleeting = acting->next;
	acting->next = fleeting->next;
	free(fleeting);

	return (1);
}
