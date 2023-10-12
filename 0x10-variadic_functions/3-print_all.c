#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format string.
 * @format: A string containing format specifiers for argumenst.
 *
 * Desccription: This funtion prints arguments based on format specifiers.
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string (replaces NULL with "(nil)")
 * - Any other char is ignored.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	unsigned int t = 0;
	char c;
	int num;
	float f;
	char *str;

	va_start(args, format);

	while (format && format[t])
	{
		c = format[t];
		switch (c)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", sep, num);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				t++;
				continue;
		}
		sep = ", ";
		t++;
	}
va_end(args);
printf("\n");
}
