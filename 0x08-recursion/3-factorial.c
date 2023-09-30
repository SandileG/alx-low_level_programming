#include "main.h"

/**
 * factorial - Returns factorial of given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	/* Base case: if n is negative, return -1 to indicate error. */
	if (n < 0)
		(return -1);

	/* Base case: if n is 0, factorial is 1  */
	if (n == 0)
		(return 1);

	/* Recursive case: multply n with factorial of (n-1) */
	return (n * factorial(n - 1));
}
