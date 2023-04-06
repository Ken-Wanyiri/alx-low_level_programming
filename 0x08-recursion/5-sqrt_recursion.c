#include "main.h"

/**
 * actual_sqrt_recursion - Helper function for _sqrt_recursion
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: The natural square root of a number
 */
int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
