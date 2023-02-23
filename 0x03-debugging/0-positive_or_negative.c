#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: a function that returns positive or negative
 *Return: always 0
 */
void positive_or_negative(int i)
{
        int i;

        if (i > 0)
        {
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	/*Return: always 0 */
	return (0);
}
