#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int s, len, total_len = 0;
	char *ptr, *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

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

	ptr = concat_str;
	for (s = 0; s < ac; s++)
	{
		len = 0;
		while (av[s][len])
		{
			*ptr = av[s][len];
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
