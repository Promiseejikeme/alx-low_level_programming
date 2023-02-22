#include <stdio.h>
/**
 * main - Entry point
 * Description: declare the function butdoes not call it
 * Return: always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
