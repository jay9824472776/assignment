#include <stdio.h>

void stringConcat(char* destination, const char* source) {
    while (*destination) destination++; // Find the end of the first string
    while (*source) {
        *destination++ = *source++; // Copy second string
    }
    *destination = '\0';
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    stringConcat(str1, str2);
    printf("Combined string: %s\n", str1);
    return 0;
}

