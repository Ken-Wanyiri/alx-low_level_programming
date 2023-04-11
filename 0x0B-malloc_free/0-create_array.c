#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size `size` and fills it with char `c`
 *
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: pointer to the created array, or NULL if failed to allocate memory
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
