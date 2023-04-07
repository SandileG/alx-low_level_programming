#include "main.h"

/**
 * set_bit - sets bit at given index to 1
 * @cam: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *cam, unsigned int index)

{
	if (index > 63)
		return (-1);

	*cam = ((1UL << index) | *cam);
		return (1);
}
