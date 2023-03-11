#include "main.h"
#include <string.h>
/**
 * _strcat - this function appends the src
 * string to the dest string, overwritting the
 * terminating null byte (\0)
 * @src: char variable that holds "Hello"
 * @dest: char variable that holds "World"
 * Return: Returns dest
 */
char *_strcat(char *dest, char *src)
{
        int dest_len = strlen(dest);
        int i;

        for (i = 0; src[i] != '\0'; i++)
                dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';
        return (dest);
}
