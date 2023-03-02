#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * int - takes in any integer
 * @n: returns the size
 * @a: represents an array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
