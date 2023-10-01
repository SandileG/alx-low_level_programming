#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, len, 0));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @len: The length of the string.
 * @idx: The current index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int len, int idx)
{
	if (idx >= len / 2)
	return (1);

	if (s[idx] != s[len - idx - 1])
	return (0);

	return (check_palindrome(s, len, idx + 1));
}
