#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (n < 2) /* 0 and 1 are not prime numbers */
	return (0);

	if (divisor * divisor > n)
	return (1); /* If no divisors found, it's prime */

	if (n % divisor == 0)
	return (0); /* Not prime, as it's divisible by divisor */

	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2)); /* Start with divisor = 2 */
}
