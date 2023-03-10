#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string
 * _putchar: returns a character variable
 * Return: returns 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
