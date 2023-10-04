#include "main.h"

/**
 * _strspn - Gets length prefix substring that matches characters in accept.
 * @s: Pointer to the string to be analyzed.
 * @accept: Pointer to the string containing characters to match.
 *
 * Return: Length of the matched segment (unsigned int).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
		match = 0; /* Reset match flag */

		/* Check if the character in s is in accept */
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}

		if (match)
		{
			count++;
			s++;
		}
		else
		{
			break; /* Exit loop if no match is found */
		}
	}

	return (count);
}

