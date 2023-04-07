#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one number to another
 * @axel: first number
 * @fowley: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int axel, unsigned long int fowley)

{
	int mav, strider = 0;
	unsigned long int war_hog;
	unsigned long int xor = axel ^ fowley;

	for (mav = 63; mav >= 0; mav--)
	{
		war_hog = xor >> mav;
		if (war_hog & 1)
			strider++;
	}

	return (strider);
}
