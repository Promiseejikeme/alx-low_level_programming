#include <stdio.h>
#include "main.h"
/**
 * main- Entry point
 * Description: function that prints alphabets
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
