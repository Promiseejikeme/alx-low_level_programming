#include <stdio.h>
/**
 * main - checks the code
 * @num - takes a number variable
 * @factor -hold s the value 2
 * @largest - holds the value 1
 * Return: Always 0
 */
int main()
{
	int num = 612852475143;
	int factor = 2;
	int largest = 1;
	
	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest = factor;
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	if (largest == 1)
	{_putchar('1');
	}
	else
	{
		while (largest > 0)
		{
			_putchar((largest % 10) + '0');
			largest /= 10;
		}
	}
	_putchar('\n');
	return 0;
}
