#include <stdio.h>
#include "main.h"
/**
 * _print_to_98 - prints all natural numbers from n
 * to 98
 * @i: i is initialized to n
 * @n: take in any integar value
 * printf: returns the result
 */
void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
