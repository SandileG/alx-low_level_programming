#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize the sign of the integer. */
	int result = 0; /* Initialize the result. */

	/* Handle negative sign if present. */
	if (*s == '-')
	{
		sign = -1;
		s++; /* Move to the next character. */
	}

	/* Iterate through the string and convert to an integer. */
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
	else
	{
		/* Break if a non-digit character is encountered. */
		break;
	}
	s++; /* Move to the next character. */

	}

	return (result * sign); /* Apply the sign to the result. */
}
