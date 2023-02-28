#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * int -  returns an integer
 * @len: returns the length of a string
 * @start: returns half of len
 * @i: initialized to start
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i = start;

	if (len % 2 ==1)
	{
		start++;
	}
	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
