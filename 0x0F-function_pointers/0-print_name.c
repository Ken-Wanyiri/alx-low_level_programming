#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: A pointer to the function to use to print the name
 *
 * Description: This function takes in a name and a function pointer, and uses
 * the function pointer to print out the name.
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
