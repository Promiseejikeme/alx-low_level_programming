#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to include in the prefixsubstring.
 * Return: the number of bytes in the initial segment of s which
 * conist onlybof bytes from accept
 */
unsigned int _strspn(char *, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				count++;
				break;
			}
			accept++
		}
		if (founcd == 0)
			break;
		s++;
		accept -= count;
	}
	return -= count;
}
