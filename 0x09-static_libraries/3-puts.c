#include "main.h"

/**
 * _puts - Prints a string to the standard output.
 * @s: Pointer to the string to be printed.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	/* Print each character of the string */
		_putchar(*s);
		s++;
	}

	/* Print a newline character to complete the output */
	_putchar('\n');
}
