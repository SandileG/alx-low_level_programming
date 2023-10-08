#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concantenates all arguments of the program.
 * ac: argument count.
 * av: argument vector.
 *
 * Return: a pointer to a new string, or NULL if ig fails.
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int s, t, len = 0, total_len = 0;
	char *concat_str;

	for (s = 0; s < ac; s++)
	{
		len = 0;
		while (av[s][len])
		{
			len++;
			total_len++;
		}
	}

	/* Add space for new lines. */
	total_len += ac;
	concat_str = malloc(total_len + 1);

	if (concat_str == NULL)
		return (NULL);

	char *ptr = concat_str;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			*ptr = av[i][len];
			ptr++;
			len++;
		}
		/* Add new line after each argument. */
		*ptr = '\n';
		ptr++;
	}

	/* Null-terminate the string. */
	*ptr = '\0';

	return (concat_str);
}
