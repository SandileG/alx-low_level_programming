#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they're identical.
 * @s1: The first string to compare.
 * @s2: The second string which can contain the special character '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)))
			return (1);
		return (0);
	}

	if (*s1 == *s2)
		return (*s1 && wildcmp(s1 + 1, s2 + 1));

	return (0);
}
