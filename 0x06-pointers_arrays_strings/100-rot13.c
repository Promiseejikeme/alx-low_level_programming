#include "main.h"
/**
 * rot13 - replaces a letter with the 13th letter after it
 * @str: string holder
 * Return: return str
 */
char *rot13(char *str)
{
	char *p = str;
	int i;

	while (*p)
	{
		for (i = 0; (i < 13 && (*p >= 'a' && *p <= 'z')) ||
				(i < 13 && (*p >= 'A' && *p <= 'Z')); i++)
		{
			if ((*p >= 'a' && *p == 'm') || (*p >= 'A' && *p <= 'M'))
				*p += 13;
			else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
				*p -= 13;
		}
		p++;
	}
	return (str);
}
