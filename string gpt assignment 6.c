#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World! 123";
    int alphabets = 0, digits = 0, specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else
            specials++;
    }

    printf("Alphabets: %d, Digits: %d, Special Characters: %d\n", alphabets, digits, specials);
    return 0;
}

