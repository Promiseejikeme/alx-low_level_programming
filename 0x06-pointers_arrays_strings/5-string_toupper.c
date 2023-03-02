#include "main.h"
/**
 * string_toupper - changes string from lowercase to uppercase
 * int - accepts any integer value
 * char - accepts any character value
 * @str: accepts string input
 * @str[i]: represents an array of i entries
 * Return: returns str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
