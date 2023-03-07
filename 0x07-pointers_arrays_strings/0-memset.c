#include "main.h"
/**
 * *_memset - fils the first n bytes of the memory
 * area pointed by s with the constant byte b
 * @s: a pointer stored in char address
 * @b: accepts any character variable
 * @n: acceptsany unsigned int variable
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
