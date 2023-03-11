#include "main.h"
/**
 * _strcat - concatinates a string
 * @dest: the destination string
 * @src: the source string
 * @ret: a pointer to a char type where the result is stored
 * Return: return ret
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;
	
	while (*dest)
		dest++;
	while ((*dest++ = *src++));
	return (ret);
}
