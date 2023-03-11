#include "main.h"
/**
 * _puts - prints string
 * @s: a pointer the character stirng dtored in memory
 * _putchar - prints character data type
 */
void _puts(char *s)
{
	while(*s)
		_putchar(*s++);
}

