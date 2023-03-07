#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the diagonals of a matrix
 * @a: a pointer to the elements of the matrix
 * @size: the sizeof the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
