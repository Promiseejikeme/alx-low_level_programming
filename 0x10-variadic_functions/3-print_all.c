#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
int _putchar(char c);

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i;
    char *str;
    
    va_start(args, format);
    
    i = 0;
    while (format != NULL && format[i] != '\0') {
        switch (format[i]) {
            case 'c':
                _putchar(va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL) {
                    const char nil_str[] = "(nil)";
                    unsigned int j;
                    for (j = 0; j < sizeof(nil_str) - 1; j++) {
                        _putchar(nil_str[j]);
                    }
                } else {
                    printf("%s", str);
                }
                break;
            default:
                break;
        }
        
        if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')) {
            const char sep[] = ", ";
            unsigned int j;
            for (j = 0; j < sizeof(sep) - 1; j++) {
                _putchar(sep[j]);
            }
        }
        
        i++;
    }
    
    va_end(args);
    
    _putchar('\n');
}
