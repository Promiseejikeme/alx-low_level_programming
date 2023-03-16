#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc == 1) {
        _putchar('0');
        _putchar('\n');
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        char *num_str = argv[i];

        for (int j = 0; num_str[j] != '\0'; j++) {
            if (!isdigit(num_str[j])) {
                _putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');
                return 1;
            }
        }

        int num = atoi(num_str);

        if (num < 0) {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            return 1;
        }

        sum += num;
    }

    int digits[10];
    int i = 0;

    if (sum == 0) {
        _putchar('0');
        _putchar('\n');
        return 0;
    }

    while (sum != 0) {
        digits[i] = sum % 10;
        sum /= 10;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        _putchar(digits[j] + '0');
    }

    _putchar('\n');

    return 0;
}

