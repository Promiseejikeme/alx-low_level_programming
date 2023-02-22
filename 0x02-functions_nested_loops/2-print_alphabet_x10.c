#include "main.h"
/**
 * main - Entry point
 * Description: the functions prints x10 of the alphabet
 * Return: always 0
 */
void print_alphabet_x10(void)
/*Description: the function prints x10 off the alphabet */
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		putchar('\n');
	}
}
