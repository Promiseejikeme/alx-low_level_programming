#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the code
 * @argc: the argument counter
 * @argv: the argument vector of the arrays of a string
 * Return: returns EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];

	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	return (EXIT_SUCCESS);
}
