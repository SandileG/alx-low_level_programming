#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int mav, scram_jet = 0;
	unsigned long int darkstar;

	for (mav = 63; mav >= 0; mav--)
	{
		darkstar = n >> mav;

		if (darkstar & 1)
		{
			_putchar('1');
			scram_jet++;
		}
		else if (scram_jet)
			_putchar('0');
	}
	if (!scram_jet)
		_putchar('0');
}
