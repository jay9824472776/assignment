#include <stdio.h>

int compareStrings(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    if (compareStrings(str1, str2) == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are not identical.\n");
    }
    return 0;
}

