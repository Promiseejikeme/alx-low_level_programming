#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
 * Return: returns 0 when the string reaches the NULL
 * value and add  1 to the length of the rest of the
 * string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
