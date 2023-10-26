#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int bit_checker = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_checker)
	{
		if (n & bit_checker)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		bit_checker = bit_checker >> 1;
	}
}
