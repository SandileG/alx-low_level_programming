#include <stdio.h>
/**
 * main - Must create program that prints the size of various types of files
 * Return: 0 (Desired Result)
 */
int main(void)
{
	char age;
	int of;
	long int ultron;
	long long int draws;
	float near;

printf("Size of a char: %lu byte(s)"\n, (unsigned long)sizeof(age));
printf("Size of a char: %lu byte(s)"\n, (unsigned long)sizeof(of));
printf("Size of a char: %lu byte(s)"\n, (unsigned long)sizeof(ultron));
printf("Size of a char: %lu byte(s)"\n, (unsigned long)sizeof(draws));
printf("Size of a char: %lu byte(s)"\n, (unsigned long)sizeof(near));
return (0);
}
