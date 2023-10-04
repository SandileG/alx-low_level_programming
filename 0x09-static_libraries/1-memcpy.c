#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest.
 * @dest: Pointer to destination memory.
 * @src: Pointer to source memory to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to destination memory (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
