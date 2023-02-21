#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: function thatreturns digits in base 10
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
