#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * and returns the head node's data (n).
 * @head: Pointer to a pointer that pooints to the head of the list.
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}
