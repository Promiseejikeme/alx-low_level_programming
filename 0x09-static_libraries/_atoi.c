#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: takes in a character value
 * @num: initialized to 0
 * @sign: initialized to 1
 * Return: returns the multiplication value of num and sign
 */
int _atoi(char *s)
{
	int num = 0, sign = 1;
	
	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * sign);
}
