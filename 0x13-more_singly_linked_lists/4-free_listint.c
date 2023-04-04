#include "lists.h"

/**
* free_listint - frees a linked list
* @head: listint_t list to be freed
*/

void free_listint(listint_t *head)

{
	listint_t *acting;

	while (head)
	{
		acting = head->next;
		free(head);
		head = acting;
	}
}
