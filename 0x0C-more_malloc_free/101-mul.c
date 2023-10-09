#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a character is a digit.
 * @c: The character to check.
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Multiply two positive numbers.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", num1 * num2);

	return (0);
}

