#include "main.h"
/**
 * print_line - draws horizontal line of length 10
 * _putchar: returns a character
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		_putchar('_');
	}
}
