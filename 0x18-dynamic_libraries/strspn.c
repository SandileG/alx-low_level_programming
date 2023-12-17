#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The characters to match.
 *
 * Return: Number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s && (match = _strchr(accept, *s) != NULL))
	{
		if (!match)
		{
			break;
		}
		count++;
		s++;
	}

	return (count);
}
