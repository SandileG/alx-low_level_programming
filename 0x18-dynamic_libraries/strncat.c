#include "main.h"

/**
 * _strncat - Concatenates two strings, but with a specified number of characters.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (ptr);
}
