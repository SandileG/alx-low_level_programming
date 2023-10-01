#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* 0 and 1 are not prime numbers */
	if (n <= 1)
	return (0);

	/* Check for divisibility by numbers from 2 to the square root of n. */
	for (int i = 2; i * i <= n; i++)
	{
		/* Not prime, as it's divisible by i. */
		if (n % i == 0)
		return (0);

	}

	/* If no divisors found, it's prome. */
	return (1);
}
