#include "main.h"
/**
 * _strcpy - copies a string to another another destination
 * @dest: the destination to be copied into
 * @src: the source to be copied from
 * @ret: stores the result of the of the copying
 * Return: retrurns ret
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while ((*dest++ = *src++));
	return (ret);
}
