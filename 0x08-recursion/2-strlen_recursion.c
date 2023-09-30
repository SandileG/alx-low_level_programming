#include "main.h"

/**
 * _strlen_recursion - Returns length of string.
 * @s: Pointer to string.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	/* Base case: if current character is null terminator, return 0. */
	if (*s == '\0')
	return (0);

	/* Recursive case: add 1 to length and call function with next character. */
	return (1 + _strlen_recursion(s + 1));
}
