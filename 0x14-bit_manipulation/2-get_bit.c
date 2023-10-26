#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check the bit in.
 * @index: Index, starting from 0, of the bit to get.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
