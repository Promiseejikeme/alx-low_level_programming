#include <stdarg.h>
/**
 * sum_them_all - adds all a given set of numbers and returns theri sum
 * @n: accepts any integer value
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
