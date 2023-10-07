#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - checks if a string is a positive number.
 * @str: the string to check.
 *
 * Return: 1 if positive number, 0 otherwise.
 */

int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
