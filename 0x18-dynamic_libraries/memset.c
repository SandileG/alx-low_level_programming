#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Pointer to the memory block.
 * @b: Value to set.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (ptr);
}
