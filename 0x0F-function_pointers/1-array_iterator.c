#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - Apply a given function to each element of an array.
 * @array: The array to operate on.
 * @size: The size of the array.
 * @action: A pointer to the function to apply to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check for NULL pointers to ensure safe execution. */
	if (array == NULL || action == NULL)
		return;
	
	for (size_t p = 0; p < size; p++)
	{
	/* Call the provided function on each element of the array. */	
		action(array[p]);
	}
}
