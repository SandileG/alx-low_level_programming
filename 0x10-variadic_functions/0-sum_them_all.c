#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>


/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments
 * @...: Variable number of integer arguments
 *
 * Return: Sum of all the integers, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int b;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (b = 0; b < n; b++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
