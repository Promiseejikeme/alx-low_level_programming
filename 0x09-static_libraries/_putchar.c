#include <unistd.h>
#include "main.h"
/**
 * _putchar: returns a character 
 * @c: accepts any character variable
 * Return: returns a pointer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
