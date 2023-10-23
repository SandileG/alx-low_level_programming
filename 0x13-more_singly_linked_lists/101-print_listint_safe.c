#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;
	const listint_t *checked[1024];

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
	
		size_t i;
		for (i = 0; i < count; i++)
		{
			if (current == checked[i])
			{
				printf("[%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		checked[count] = current;
		count++;
		if (count > 1024)
			break;
		current = current->next;
	}

	return (count);
}
