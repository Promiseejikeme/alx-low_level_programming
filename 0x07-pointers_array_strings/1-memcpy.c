#include "main.h"
/**
 * _memcpy - copies n bytes from src to memory area dest
 * @dest: pointer to destination area
 * @src: pointer to source area
 * @n: Number of bytes to copy
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
