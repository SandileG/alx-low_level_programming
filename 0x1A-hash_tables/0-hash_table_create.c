#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 *		or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int f;

	/* Allocate memory for the array of hash nodes. */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_nodes. */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Intialize each element of the array to NULL. */
	for (f = 0; f < size; f++)
		new_table->array[f] = NULL;

	/* Set the size of the hash table. */
	new_table->size = size;

	return (new_table);
}
