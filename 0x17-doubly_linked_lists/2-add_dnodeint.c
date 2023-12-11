#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node/
 *
 * Return: The address of the bew element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Memory allocation for new node. */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node. */
	new_node->n = n;
	new_node->prev = NULL;

	/* Link new node to current head, if it exists. */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update head to point to new node. */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
