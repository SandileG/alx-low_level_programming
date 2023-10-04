#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to the source string to be mapped.
 *
 * Return: Pointer to concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	/* Move dest pointer to the end of dest string. */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Null-terminate the concatenated string. */
	*dest = '\0';

	return (dest_start);
}
