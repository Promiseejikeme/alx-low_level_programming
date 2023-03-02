#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>
/**
 * cap_string - a function that capitalizes all words of a string
 * int - accepts any integer value
 * char - accept any character variable
 * @sep[]: an array of special characters
 * @str[i]: an array the takes in i variables
 * toupper: converts string to uppercase
 * tolower: converts string to lowercase
 * Return: returns str
 */
char *cap_string(char *str)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == '\0' || strchr(sep, str[i - 1]) != NULL)
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
