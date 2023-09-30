#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
	/* Base case: if we reach the end of the string */
	if (*s == '\0')
	return;

	/* Recursively call _print_rev_recursion with next character in the string. */
	_print_rev_recursion(s + 1);

	/* Print the current character. */
	_putchar(*s);

}
