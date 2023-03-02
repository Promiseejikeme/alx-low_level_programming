#include "main.h"
/**
 * _strcmp - compares two strings and returns an integer
 * int - retruns an integer type
 * @s1: String 1
 * @s2: String 2
 * Return: returns (s1[i] - s2[i])
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
