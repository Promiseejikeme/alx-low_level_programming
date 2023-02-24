#include "main.h"
/**
 * print_numbers - Prints digits 0 t0 9 with a new line
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
