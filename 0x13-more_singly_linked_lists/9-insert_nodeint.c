#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int t;
	listint_t *latest;
	listint_t *acting = *head;

	latest = malloc(sizeof(listint_t));

	if (!latest || !head)

	return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
		{
		latest->next = *head;
		*head = latest;

		return (latest);
		}

	for (t = 0; acting && t < idx; t++)
	{
	if (t == idx - 1)
		{
		latest->next = acting->next;
		acting->next = latest;

		return (latest);
		}
	else
		acting = acting->next;
	}

	return (NULL);
}
