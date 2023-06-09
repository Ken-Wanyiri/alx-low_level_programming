#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The number of elements in the array
 * @action: A pointer to the function to execute on each element
 *
 * Description: This function takes in an array, its size,
 * and a function pointer,
 * and executes the function on each element of the array.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
