#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len, word_count;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	word_count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	for (j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
			i++;
		k = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		words[j] = malloc((i - k + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			while (j >= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}
		for (k = k; k < i; k++)
			words[j][k - i] = str[k];
		words[j][k - i] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}
