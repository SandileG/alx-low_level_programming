#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line recursivley.
 *
 * @s: Pointer to the string to be printed.
 */

void _puts_recursion(char *s)
{
	/* Base case: end of string. */
	if (*s == '\0')
	{
		/* Print a newline character. */
		_putchar('\n');
		return;
	}

	/* Print the current character. */
	_putchar(*s);

	/* Recursively call with the next character. */
	_puts_recursion(s + 1);
}
