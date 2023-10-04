#include "main.h"

/**
 * _isupper - In C, checks if character is uppercase.
 * @c: Character to be scrutinized.
 *
 * Return: 1 if c is indeed uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
