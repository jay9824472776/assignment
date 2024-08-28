#include <stdio.h>

void stringCopy(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main() {
    char src[] = "Hello, World!";
    char dest[100];
    stringCopy(dest, src);
    printf("Copied String: %s\n", dest);
    return 0;
}

