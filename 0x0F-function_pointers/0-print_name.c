#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a provided printing function.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how to print the name.
 *
 * Return: None.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
