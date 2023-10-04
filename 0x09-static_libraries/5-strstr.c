#define NULL ((void *)0)
#include "main.h"

/**
* _strstr - Finds the first occurrence of substring within a string.
* @haystack: Pointer to main string.
* @needle: Pointer to substring to be found.
*
* Return: Pointer to first occurrence of substring or NULL if substring
* not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *start_haystack;
	char *start_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		start_needle = needle;

		/* Check for substring match */
		while (*needle && *haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		/* If entire substring is found, return starting position. */
		if (!*needle)

			return (start_haystack);

		/* Otherwise, reset pointers and continue searching. */
		haystack = start_haystack + 1;

		needle = start_needle;
	}

	/* substring not found. */
	return (NULL);
}
