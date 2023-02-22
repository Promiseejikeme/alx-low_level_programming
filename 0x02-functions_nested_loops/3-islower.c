#include "main.h"
/**
 * main -Entry point
 * _islower: checks if a given character is lowercase, where x is the declaration
 * Description: function that checks for lowercase character
 * Return: always 0;
 */
int main(void)
{
	int _islower(int x)
	{
		if (x <= 'a' && x >= 'z')
			return (1);
		else
			return (0);
	}
}
