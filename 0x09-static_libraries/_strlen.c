#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s:accepts a character value
 * @len: initialized to 0
 * Return: returns len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
