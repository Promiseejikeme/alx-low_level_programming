#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 * Description: function that returns alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
