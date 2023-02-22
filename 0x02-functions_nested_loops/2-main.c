#include "main.h"
/**
 * main - Entry point
 * Description: function that prints x10 the alphabet
 * Return: always 0
 */
void print_alphabet_x10(void) 
{
	int i, j;

    	for (i = 0; i < 10; i++) 
	{
	    for (j = 'a'; j <= 'z'; j++)
	    {
		_putchar(j);
	    }	
	_putchar('\n');
	}
}
