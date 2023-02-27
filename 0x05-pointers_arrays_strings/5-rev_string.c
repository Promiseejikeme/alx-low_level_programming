#include "main.h"
/**
 * rev_string - reverses a string
 * len: returns the length of a string
 * @i: an integer
 * @j: an integer
 * temp: temporarily storess the value of s[]
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j = len -1;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
