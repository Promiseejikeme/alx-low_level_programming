#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: a string character to be iterated through
 * @c: string character to match
 * Return: return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
