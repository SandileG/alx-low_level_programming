#include <stdio.h>
/**
 * main - Must create a program that prints various data types
 * Return: 0 (Desired Result)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a fload: %d byte(s)\n", sizeof(float));
	return (0);
}
