#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed be a new line.
 * @separator: The string to be printed between the strings (or NULL).
 * @n: The number of strings passed to the function.
 *
 * Description: This function prints strings with an optional separator
 * between them, replacing any NULL strings with "(nil)", and adds a new
 * line character at the end.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int t;
	char *str;

	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && t != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
