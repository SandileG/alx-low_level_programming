#include "main.h"

/**
 * _isdigit - Checks if character is a digit (0-9).
 * @c: The character or value to be checked.
 *
 * Return: 1 if c is digit, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
