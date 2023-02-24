#include "main.h"
/**
 * print_line - draws horizontal line of length 10
 * _putchar: returns a character
 */
void print_line(int n)
{
	for (n = 1; n <= 10; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
}
