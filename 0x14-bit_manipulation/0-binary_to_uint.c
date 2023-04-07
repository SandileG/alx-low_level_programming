#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int mav;
	unsigned int top_gun = 0;

	if (!b)
		return (0);

	for (mav = 0; b[mav]; mav++)
	{
		if (b[mav] < '0' || b[mav] > '1')
			return (0);
		top_gun = 2 * top_gun + (b[mav] - '0');
	}

	return (top_gun);
}
