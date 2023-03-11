#include "main.h"
/**
 * _isalpha - prints the alphabets 
 * @c: accepts any integer value
 * Return: returns alphabets 
 */
int _islalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
