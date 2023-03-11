#include "main.h"
/**
 * _strncpy - copies a string to a destination
 * int - accepts any integer value
 * @dest: destination location
 * @src: source location
 * @n: maximum chararcters
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
