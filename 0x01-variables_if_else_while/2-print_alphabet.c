#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: function that prints the alphabet in lowercase, followed by a new line
 * Return: always 0
 */
int main(void)
{
	char c;
	for (c='a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return 0;
}
