#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @a: an integer
 * @b: an integer
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 48;
	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b =%d\n", a, b);
	return (0);
}
