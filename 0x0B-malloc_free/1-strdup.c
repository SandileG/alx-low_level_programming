#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory,
 * which contains copy of the string given as parametet.
 *
 * @str: the string to duplicate.
 *
 * Return: a pointer to duplicated strin, or NULL if insufficient memory.
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int t, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string. */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string. */
	dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	/* Copy the string character by character. */
	for (t = 0; t <= len; t++)
		dup_str[t] = str[t];

	return (dup_str);
}
