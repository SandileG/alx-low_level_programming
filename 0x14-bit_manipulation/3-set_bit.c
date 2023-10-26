#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to update.
 * @index: Index, starting from 0, of the bit to set.
 *
 * Return: 1 if if worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
