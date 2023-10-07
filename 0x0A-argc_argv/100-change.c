#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * min_coins - calculates minimum number of coins needed for change.
 * @cents: the amount of cents for which to make change.
 *
 * Return: the minimum number of coins needed.
 */

int min_coins(int cents)
{
	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int s;

	if (cents <= 0)
		return (0);

	for (s = 0; s < 5; s++)
	{
		while (cents >= denominations[s])
		{
			cents -= denominations[s];
			coins++;
		}
	}

	return (coins);
}

/**
 * main - calculates and prints minimum number of coins for change.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success,1 on error.
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = min_coins(cents);

	printf("%d\n", coins);

	return (0);
}
