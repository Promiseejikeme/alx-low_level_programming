#include "main.h"
/**
 * _isdigit - checks for digit 0 to 9
 * Return: 1 if c is a digit from 0 to 9
 * else it returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
