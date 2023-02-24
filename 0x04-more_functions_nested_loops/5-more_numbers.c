#include "main.h"
/**
 * more_numbers - prints a range of numbers times 10
 * _putchar - returns a character
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
