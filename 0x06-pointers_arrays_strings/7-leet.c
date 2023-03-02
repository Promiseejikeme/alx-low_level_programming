#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - encodes a string
 * @i: takes in an integer
 * @j: takes in an integer
 * letters: holds a string
 * leet: holds a string
 * Return: returns leet_str
 */
char *leet(char *str)
{
	int i, j;
	char *leet_str = str;
	char *letters = "aeotlAEOTL";
	char *leets = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{

			if (str[i] == letters[j])
			{
				leet_str[i] = leets[j];
				break;
			}
		}
	}
	return (leet_str);
}
