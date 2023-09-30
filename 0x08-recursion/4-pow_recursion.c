#include "main.h"

/**
 * _pow_recursion - Calculate x raised to the power of y recursively
 *
 * @x: Base number
 * @y: Exponent
 *
 * Return: Result of x raised to power y
 *	If y is lower than 0, return -1
 */

int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 as specified. */
	if (y < 0)
	return (-1);

	/* Anything raised to the power of 0 is 1. */
	if (y == 0)
	return (1);

	/* Recursively calculate the power. */
	return (x * _pow_recursion(x, y - 1));
}
