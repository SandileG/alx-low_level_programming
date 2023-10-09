#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array and set it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of the each element in bytes.
 *
 * Return: A pointer to the allocated memory or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
