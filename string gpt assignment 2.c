#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;
    printf("Individual characters of the string:\n");
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}

