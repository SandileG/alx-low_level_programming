#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int s = 0;

	listint_t *acting = head;

	while (acting && s < index)

	{
		acting = acting->next;
		s++;
	}

	return (acting ? acting : NULL);

}