#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */

 int main(int argc, char *argv[])
 {
	/* Suppress unused parameter warning. */
	(void)argc;

	/* Loop through the characters in argv[0] and print them. */
	for (int i = 0; argv[0][i] != '\0'; i++)
	{
		_putchaar(argv[0][i]);
	}

	_putchar('\n');

	return (0);
 }
