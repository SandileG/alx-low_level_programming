#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function frees a doubly linked list of type dlistint_t.
 * It iterates through the list, freeing each node and updating the head
 * pointer until the entire list is freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
