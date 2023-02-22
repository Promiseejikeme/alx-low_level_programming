#include "main.h"
/**
 * test_islower - Test the _islower function
 * @n: Number to pass to _islower function
 */
int _islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
}
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	_islower('H');
	return (0);
}
