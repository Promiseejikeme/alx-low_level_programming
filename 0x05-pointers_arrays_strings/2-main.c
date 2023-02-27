#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @str: the pointer
 * len: returns the lenth of a string
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
