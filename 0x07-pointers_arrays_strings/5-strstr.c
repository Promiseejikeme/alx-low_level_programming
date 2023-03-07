#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - locate a substring
 * @haystack: string to be iterated through
 * @needle: string whose substring is to be found
 * Return: returns NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	int i, j;

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
