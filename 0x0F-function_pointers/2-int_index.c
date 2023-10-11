#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Search for an integer in an array.
 * @array: The array to search within.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp doesn't return 0,
 *or -1 if no match or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]) != 0)
			return (s);
	}

	/* No match found. */
	return (-1);
}
