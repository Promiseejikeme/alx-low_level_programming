#include <stdio.h>
/**
 * main- Entry point
 * Description: function to returns all combo of single digits
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i + '0');
		}
		putchar('\n');
		return (0);
	}
}
