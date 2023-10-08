#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to newly allocated concatenated string.
 * or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, s, t;

	/* Treat NULL as an empty string. */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of the input strings. */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string. */
	concat_str = malloc((len1 + len2) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	/* Copy the first string to the concatenated string. */
	for (s = 0; s < len1; s++)
		concat_str[s] = s1[s];

	/* Copy the second string to the concatenated string. */
	for (t = 0; t < len2; t++)
		concat_str[s + t] = s2[t];

	/* Null-terminate the concatenated string. */
	concat_str[s + t] = '\0';

	return (concat_str);
}
