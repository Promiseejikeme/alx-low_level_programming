#include "main.h"
/**
 * _puts_recursion - print a strring
 * @s: pointer address to thr string
 * Return: returns 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
