#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initaializes with a char
 * @size: the size of the array.
 * @c: the character to initialize the array with.
 *
 * Return: a pointer to ther array, or NILL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int s;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the array. */
	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
	/* Initialize array with the specified character. */
		array[s] = c;

	return (array);
}
