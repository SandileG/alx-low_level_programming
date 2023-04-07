#include "main.h"

/**
* get_endianness - checks endian nature of machine
* Return: 0 for big, 1 for little
*/

int get_endianness(void)

{
	unsigned int asus = 1;

	char *dud = (char *) &asus;

	return (*dud);
}
