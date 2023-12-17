#include "main.h"

/**
 * _strncpy - Copies a specified number of characters from one string to another.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (ptr);
}
