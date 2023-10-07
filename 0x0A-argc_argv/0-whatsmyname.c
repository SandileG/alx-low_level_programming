#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	while (*program_name)
	{
		putchar(*program_name);
		program_name++;
	}

	putchar('\n');

	return (0);
}
