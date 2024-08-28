#include <stdio.h>

void substring(char* dest, const char* src, int start, int length) {
    src += start;
    while (length-- && *src)
        *dest++ = *src++;
    *dest = '\0';
}

int main() {
    char str[] = "Hello, World!";
    char sub[100];
    substring(sub, str, 7, 5); // Extract "World" from the string
    printf("Substring: %s\n", sub);
    return 0;
}

