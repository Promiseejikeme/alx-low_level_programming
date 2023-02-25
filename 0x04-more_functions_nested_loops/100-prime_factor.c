#include <stdio.h>
/**
 * main - checks the code
 * @num - takes a number variable
 * @factor -hold s the value 2
 * @largest - holds the value 1
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int i = 2, largest_prime_factor = 0;
	
	while (n > 1)
	{
		if (n % i == 0)
		{n /= i;
			largest_prime_factor = i;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", largest_prime_factor);
	return 0;
}
