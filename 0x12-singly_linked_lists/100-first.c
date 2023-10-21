#include "lists.h"

/**
 * print_before_main - Prints specific lines before main function execution.
 */
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - Prints specific lines before main function execution.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * first_main - check the code.
 *
 * Return: Always 0.
 */
int first_main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, ");
	printf("challenges one to a race.)\n");
	return (0);
}
