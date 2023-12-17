#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in s
 *         of any of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
