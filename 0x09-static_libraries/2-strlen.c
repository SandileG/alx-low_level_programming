#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
