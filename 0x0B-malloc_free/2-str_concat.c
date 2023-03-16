#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinates two strings
 * @s1: string to be concated to
 * @s2: string to concatinate
 * Return: return NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t len = len1 + len2 + 1;
	char *result = malloc(len * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}