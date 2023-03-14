#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: a strin of type char
 * Return: returns NULL
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
