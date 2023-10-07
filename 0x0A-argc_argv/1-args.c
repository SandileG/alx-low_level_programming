#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed into the program.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

 int main(int argc, char *argv[])
 {
	/* Unused varialble warning. */
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
 }
