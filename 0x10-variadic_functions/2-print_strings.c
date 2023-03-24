#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
/*
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    
    va_start(args, n);
    
    for (i = 0; i < n; i++) {
        char *str = va_arg(args, char *);
        if (str == NULL) {
            const char nil_str[] = "(nil)";
            unsigned int j;
            for (j = 0; j < sizeof(nil_str) - 1; j++) {
                _putchar(nil_str[j]);
            }
        } else {
            unsigned int j;
            for (j = 0; str[j] != '\0'; j++) {
                _putchar(str[j]);
            }
        }
        if (i < n - 1 && separator != NULL) {
            unsigned int j;
            for (j = 0; separator[j] != '\0'; j++) {
                _putchar(separator[j]);
            }
        }
    }
    
    va_end(args);
    
    _putchar('\n');
}
