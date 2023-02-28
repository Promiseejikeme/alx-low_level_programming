#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints other charactersof a string,
 * starting with the first character
 * followed by a new line
 * @i: returns an integer
 */
void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
