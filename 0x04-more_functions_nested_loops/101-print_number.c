#include "main.h"
/**
 * print_number - Print an integar
 * _putchar: returns  a character
 * @n: takes the value of integar
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
