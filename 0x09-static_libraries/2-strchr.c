#include "main.h"

/**
 * _strchr - Locates the first occurences of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: Pointer to first occurences of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* If c is not found, return NULL. */
	return (NULL);
}
