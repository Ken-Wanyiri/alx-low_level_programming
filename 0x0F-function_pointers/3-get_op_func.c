#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Returns a pointer to the function that corresponds to
 *               the operator given as a parameter.
 *
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the corresponding function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	}

	return (NULL);
}
