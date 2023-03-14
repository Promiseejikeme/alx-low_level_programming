#include "main.h"
#include <stdlib.h>
/**
 * create_array - takes a size and a char as arguments and returns a
 * pointer
 * @Size: accepts an integer type
 * @c: accepts a character type
 * Return: retunrns NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return arr;
}
