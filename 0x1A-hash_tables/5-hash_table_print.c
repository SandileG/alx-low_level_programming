#include "hash_tables.h"

/**
 * hash_table_print - Prints a has table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int bumble_bee;
	int first = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (bumble_bee = 0; bumble_bee < ht->size; bumble_bee++)
	{
		temp = ht->array[bumble_bee];
		while (temp)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			first = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
