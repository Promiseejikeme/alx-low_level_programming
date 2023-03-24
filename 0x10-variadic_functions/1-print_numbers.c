#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    int digits = 0;
    int divisor = 1;

    va_list args;

    va_start(args, n);
    for (i = 0; i < n; i++) {
        int num = va_arg(args, int);
        if (num < 0) {
            _putchar('-');
            num = -num;
        }
        divisor = 1;
        while (divisor <= num / 10) {
            divisor *= 10;
        }
        while (divisor > 0) {
            _putchar('0' + num / divisor);
            num %= divisor;
            divisor /= 10;
            digits++;
        }
        if (i < n - 1 && separator != NULL) {
            while (*separator != '\0') {
                _putchar(*separator);
                separator++;
            }
        }
    }
    va_end(args);

    _putchar('\n');
}
