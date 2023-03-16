#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the code
 * @argc: counts the number of arguments 
 * @argv: pointer to the array string
 * Return: returns EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		_putchar(argv);
		argv++;
	}
	_putchar('\n');
	return (EXIT_SUCCESS);
}
