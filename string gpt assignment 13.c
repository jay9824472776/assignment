#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World! 123";
    char cleaned[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleaned[j++] = str[i];
        }
    }
    cleaned[j] = '\0';
    printf("Cleaned string: %s\n", cleaned);
    return 0;
}

