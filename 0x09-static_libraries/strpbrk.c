#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search.
 * @accept: the set of bytes to search for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept -= (_strlen(accept) + 1);
		s++;
	}
	return (NULL);
}
