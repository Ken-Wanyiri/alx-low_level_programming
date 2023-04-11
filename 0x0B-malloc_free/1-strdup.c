#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 *           string str.
 * @str: pointer to string to be duplicated
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On failure, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
