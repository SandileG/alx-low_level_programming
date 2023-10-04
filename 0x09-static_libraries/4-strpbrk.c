#define NULL ((void *)0)
#include "main.h"

/**
 * _strpbrk - Searches a string for any character in a set.
 * @s: The input string to be searched.
 * @accept: The set of characters to search for.
 *
 * Return: A pointer to the first matching character, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
	while (*a)
	{
		if (*s == *a)
		{
			return (s); /* Return pointer to the matching character */
		}
		a++; /* Move to the next character in 'accept' */
	}
	s++; /* Move to the next character in 's */

	}

	return (NULL); /* No matching character found */
}

