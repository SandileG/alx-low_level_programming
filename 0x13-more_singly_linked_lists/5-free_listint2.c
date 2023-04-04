#include "lists.h"

/**
* free_listint2 - frees a linked lisst
* @head: pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)

{
	listint_t *acting;

	if (head == NULL)
	return;

	while (*head)
	{
		acting = (*head)->next;
		free(*head);
		*head = acting;
	}

	*head = NULL;
}
