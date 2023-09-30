#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n doesn't
 * have a natural square root.
 */

int _sqrt_recursion(int n)
{
	/* Base case: If n is negative, return -1. */
	if (n < 0)
	return (-1);

	/* Base case: The square root of 0 or 1 is the number itself. */
	if (n == 0 || n == 1)
	return (n);

	/* Recursive case: Try the next guess. */
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise continue searching.
 */

int sqrt_helper(int n, int guess)
{
	/* If guess^2 is n, we found the square root. */
	if (guess * guess == n)
	return (guess);

	/* If guess^2 is greater than n, n doesn't have a natural square root. */
	if (guess * guess > n)
	return (-1);

	/* Increment guess and continue searching recursively. */
	return (sqrt_helper(n, guess + 1));
}
