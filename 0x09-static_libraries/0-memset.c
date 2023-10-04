#include "main.h"

/**
 * _memset - Fills first n bytes of memory pointed to by s
 * with the constanct byte b.
 * @s: Pointer to the memory are to be filled.
 * @b: The value to be set in memory.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
