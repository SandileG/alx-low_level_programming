#include "main.h"

/**
 * _strncat - Concatenates two strings, only upto n characters from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of characters to append from src.
 *
 * Return: Pointer to concatenated string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest. */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n characters from src to dest. */
	dest[dest_len + i] = '\0';

	return (dest);
}
