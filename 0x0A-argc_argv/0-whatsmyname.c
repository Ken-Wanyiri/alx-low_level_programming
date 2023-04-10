#include <stdio.h>
#include "main.h"

/**
 * print_program_name - prints the name of the program
 * @program_name: the name of the program
 */
void print_program_name(char *program_name)
{
	printf("%s\n", program_name);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = *argv;

	print_program_name(program_name);

	return (0);
}
