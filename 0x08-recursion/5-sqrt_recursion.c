#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise continue searching.
 */

int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns natural square root of number.
 * @n: Number for which to find square root.
 *
 * Return: The natural square root of n, or -1 if n doesn't
 * have a natural square root.
 */

int _sqrt_recursion(int n)
{
        /* If n is negative, return -1 as specified. */
        if (n < 0)
        return (-1);

        /* The square root of 0 or 1 is the number itself. */
        if (n == 0 || n == 1)
        return (n);

        /* Call the helper function to find the square root. */
        return (_sqrt_helper(n, 1));


/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The curreent guess for the square root.
 *
 * Return: The square root if found, otherwise continue searching.
 */

int _sqrt_helper(int n, int guess)
{
        /* If guess^2 is n, we found square root */
        if (guess * guess == n)
        return (guess);

        /* If guess^2 is greater than n, n doesn't have a natural square root. */
        if (guess * guess > n)
        return (-1);

        /* Increment guess and continue searching. */
        return (_sqrt_helper(n, guess + 1));
}
